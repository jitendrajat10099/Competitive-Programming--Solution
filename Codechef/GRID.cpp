




    (function(_, e, rr, s) {
      _errs = [s];
      var c = _.onerror;
      _.onerror = function() {
        var a = arguments;
        _errs.push(a);
        c && c.apply(this, a)
      };
      var b = function() {
        var c = e.createElement(rr),
                b = e.getElementsByTagName(rr)[0];
        c.src = "//beacon.errorception.com/" + s + ".js";
        c.async = !0;
        b.parentNode.insertBefore(c, b)
      };
      _.addEventListener ? _.addEventListener("load", b, !1) : _.attachEvent("onload", b)
    })
    (window, document, "script", "4e7c8fce06a9ab05530008e5");
  





    var _sf_startpt = (new Date()).getTime()
  
CodeChef | Loading










    <section class="topbar">
      <div class="row">
        <div class="small-12 columns">
          <ul class="inline-list right social-login">
            {{#if loading}}
            <img style="position: relative;top: -64px; right: 100px;" src="/Contests/images/Loader-Username.gif"/>
            {{else}}
            {{#if username}}
            <li class="loggedin-user no-select">

                <span class="left">
                  {{{userImage}}}
                </span>

              <span class="right">
                  Hello <a>{{{htmlHandle}}}<i class="fa fa-caret-down" aria-hidden="true"></i></a>
                  <ul class="user-dropdown">
                    <span class="caret"></span>
                    <li>{{{userProfileURL}}}</li>
                    <li>{{{userEditProfileURL}}}</li>
                    <li><a href="https://goodies.codechef.com/my-laddus/">My Laddus</a></li>
                    <li><a href="/apps">My Apps</a></li>
                    <li><a href="/todos">My Todos</a></li>
                    <li><a href="/sets">My Sets</a></li>
                    <li><a href="/certificates">My Certificates</a></li>
                    {{#if isUserTeam}} {{else}}
                    <li>{{{myTeamsURL}}}</li>
                    <li><a href="/teams/invites">Team Invites</a></li>
                    {{/if}}
                    <li><a href="/referral">Referrals</a></li>
                  </ul>
                </span>
            </li>
            <li class="todo-section notification-box-todo" title="My Todo List">
              <i></i>
              <span class="notification-counter">10</span>
              <span class="notification-listbox"></span>
            </li>

            {{else}}

            <div id="user-bar">
              <form {{bind-attr action=loginActionURL }} accept-charset="UTF-8" method="post" id="new-login-form">
                <div>
                  <div class="form-item" id="edit-name-wrapper">
                    <label for="edit-name">Username: <span class="form-required" title="This field is required.">*</span></label>
                    <input maxlength="60" name="name" id="edit-name" size="60" value="" class="form-text required new-input" placeholder="Username" tabindex="1" type="text">
                  </div>
                  <div class="form-item" id="edit-pass-wrapper">
                    <label for="edit-pass">Password: <span class="form-required" title="This field is required.">*</span></label>
                    <input name="pass" id="edit-pass" maxlength="128" size="60" class="form-text required new-input" placeholder="Password" tabindex="2" type="password">
                  </div>
                  <a href="/user/password" tabindex="4">Forgot Password</a>
                  <input name="form_build_id" id="form-vPQU4c4cYe6482C2tQm1QL2K36YeNildVLh2ZwJfDrM" value="form-vPQU4c4cYe6482C2tQm1QL2K36YeNildVLh2ZwJfDrM" type="hidden">
                  <input name="form_id" id="edit-new-login-form" value="new_login_form" type="hidden">
                  <input name="op" id="edit-submit" value="Login" class="form-submit btn new-input-button" tabindex="3" type="submit">
                </div>
              </form>
            </div>
            <!--#user-bar-->

            {{/if}}

            <div id="facebook-login">
              <div id="oauth-buttons" class="oauth-buttons-header">
                {{{oauthButtons}}}
              </div>
            </div>
            <!--#facebook-login-->

            {{#if username}}
            <a href="/logout" class="button grey logout-link">Logout</a>
            {{else}}
            <div class="signup"><a href="/signup" class="new-input-button btn">New User</a></div>
            {{/if}}
            {{/if}}
          </ul>
          <div id="custom-login"></div>
        </div>
      </div>
    </section>
    <!--.topbar-->

    <header class="site">
      <div class="row">
        <div class="small-12 columns">
          <h1 class="left">
            <a href="/" title=""><img src="/sites/all/themes/abessive/logo.png" alt="CodeChef is a non-commercial competitive programming community" id="logo"><span></span></a>
          </h1>
          <nav class="right">
            <div id="block-nice_menus-1" class="block block-nice_menus block-header">
              <div class="content">
                <h2><span class="nice-menu-hide-title">Site Navigation</span></h2>
                {{#if menu}} {{{menu}}} {{/if}}
              </div>
            </div>
          </nav>
        </div>
      </div>
    </header>
    <!--.site header-->
    {{outlet}}
  

    <main class="contest-container content">
      {{#if message}}
      <div style="text-align: center;">
      {{{message}}}
      </div>
      {{else}}
      <img src="/Contests/images/Loader-content.gif">
      {{/if}}
      <div class="clearfix"></div>
    </main>
    <!--.contest-container-->
  






        String.prototype.capitalize = function() {
          return this.charAt(0).toUpperCase() + this.slice(1);
        };

        disconnectOauth = function(event, account) {
          if (event != undefined) {
            event.preventDefault();
          }
          var r = confirm("Are you sure you want to disconnect " + account.capitalize() + " account?");
          if (r == true) {
            clearUserCache();
            $.ajax({
              url: '/OAuth/' + account,
              type: 'DELETE',
              success: function() {
                window.location.reload();
              },
              error: function() {
                invokeGenericModal({
                  message: "Couldn't complete your request. Please try again.",
                  id: account + '-error-message'
                });
              }
            });
          }
        };
      

        function formatTime(ts) {
          now = new Date(ts);

          localtime = new Date();
          hour = now.getHours();
          min = now.getMinutes();
          sec = now.getSeconds();

          if (min <= 9) {
            min = "0" + min;
          }
          if (sec <= 9) {
            sec = "0" + sec;
          }
          if (hour > 12) {
            hour = hour - 12;
            add = " PM";
          } else {
            hour = hour;
            add = " AM";
          }
          if (hour == 12) {
            add = " PM";
          }
          if (hour == 00) {
            hour = "12";
          }

          $('#server-time').html(((hour <= 9) ? "0" + hour : hour) + ":" + min + ":" + sec + add);

          nextSec = (now.getTime() + 1000);

          setTimeout("formatTime(" + nextSec + ")", 1000);
        }

        function getDtTimeZone() {
          var rightNow = new Date();
          var toDay = new Date(rightNow.getFullYear(), 0, 1, 0, 0, 0, 0);
          var temp = toDay.toGMTString();
          var date2 = new Date(temp.substring(0, temp.lastIndexOf(" ") - 1));
          var stdTime = (toDay - date2) / (1000 * 60 * 60);
          return stdTime;
        }
      


CodeChef is a non-commercial competitive programming community





About CodeChef
About Directi
CEO's Corner
C-Programming
Programming Languages
Contact Us

© 2009 Directi Group. All Rights Reserved. CodeChef uses SPOJ © by Sphere Research LabsIn order to report copyright violations of any kind, send in an email to copyright@codechef.com






            The time now is: 


Your IP: 




        var _gaq = _gaq || [];
        _gaq.push(['_setAccount', 'UA-53602-42']);
        _gaq.push(['_trackPageview']);

        (function() {
          var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
          ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
          var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
        })();
      


        /* <![CDATA[ */
        var google_conversion_id = 960072479;
        var google_custom_params = window.google_tag_params;
        var google_remarketing_only = true;
        /* ]]> */
      










        _atrk_opts = {
          atrk_acct: "q16Cj1a8gN00iz",
          domain: "codechef.com",
          dynamic: true
        };
        (function() {
          var as = document.createElement('script');
          as.type = 'text/javascript';
          as.async = true;
          as.src = "https://d31qbv1cthcecs.cloudfront.net/atrk.js";
          var s = document.getElementsByTagName('script')[0];
          s.parentNode.insertBefore(as, s);
        })();
      





CodeChef - A Platform for Aspiring Programmers
CodeChef was created as a platform to help programmers make it big in the world of algorithms, computer programming and programming contests. At CodeChef we work hard to revive the geek in you by hosting a programming contest at the start of the month and another smaller programming challenge in the middle of the month. We also aim to have training sessions and discussions related to algorithms, binary search, technicalities like array size and the likes. Apart from providing a platform for programming competitions, CodeChef also has various algorithm tutorials and forum discussions to help those who are new to the world of computer programming.


Practice Section - A Place to hone your 'Computer Programming Skills'
Try your hand at one of our many practice problems and submit your solution in a language of your choice. Our programming contest judge accepts solutions in over 35+ programming languages. Preparing for coding contests were never this much fun! Receive points, and move up through the CodeChef ranks. Use our practice section to better prepare yourself for the multiple programming challenges that take place through-out the month on CodeChef.


Compete - Monthly Programming Contests and Cook-offs
Here is where you can show off your computer programming skills. Take part in our 10 day long monthly coding contest and the shorter format Cook-off coding contest. Put yourself up for recognition and win great prizes. Our programming contests have prizes worth up to INR 20,000 (for Indian Community), $700 (for Global Community) and lots more CodeChef goodies up for grabs.






Programming Tools

Online IDE
Upcoming Coding Contests
Contest Hosting
Problem Setting
CodeChef Tutorials
CodeChef Wiki



Practice Problems

Easy
Medium
Hard
Challenge
Peer
School
FAQ's



Initiatives

Go for Gold
CodeChef for Schools
Campus Chapters



 



var _sf_startpt=(new Date()).getTime() 









