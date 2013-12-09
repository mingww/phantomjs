<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>mkspecs/unsupported/macx-clang-libc++/qplatformdefs.h in qt/qt:master - Qt by Digia</title>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
      <link href="/dist/bootstrap/css/bootstrap.min.css?1386160848" rel="stylesheet" type="text/css">
      <link href="/dist/bootstrap/css/bootstrap-responsive.min.css?1386160848" rel="stylesheet" type="text/css">
      <link href="/dist/css/gitorious3.min.css?1386160848" rel="stylesheet" type="text/css">
      <link href="/ui3/js/lib/jquery-ui/themes/base/minified/jquery-ui.min.css" rel="stylesheet" type="text/css">
      <link href="/assets/issues/application.css" rel="stylesheet" type="text/css">
      <link href="/stylesheets/sites/qt/qt.css" rel="stylesheet" type="text/css">
    
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <script type="text/javascript">
var _gaq = _gaq || [];
_gaq.push(['_setAccount', 'UA-52238-3']);
_gaq.push(['_setDomainName', '.gitorious.org'])
_gaq.push(['_trackPageview']);
(function() {
   var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
   ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
   (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
})();
</script>
  </head>
  <body>
    <div class="page-wrapper">
      <div class="page-content">
        <div class="gts-masthead navbar">
          <div class="navbar-inner">
            <div class="container">
              <a href="/" class="gts-logo"><img src="/images/sites/qt/logo.png" alt="Qt by Digia" title="Qt by Digia"></a>
              <ul class="nav">
                <li>
                  <a href="/activities">Activities</a>
                </li>
                <li>
                  <a href="/projects">Projects</a>
                </li>
                <li>
                  <a href="/groups">Teams</a>
                </li>
                <li>
                  <a href="/about">About</a>
                </li>
              </ul>
              <div class="pull-right">
                <form action="/search" class="navbar-search pull-left" method="get">
                  <input type="search" placeholder="Search" class="search-query span2" name="q">
                </form>
                <div class="pull-right btn-group login_button">
                  <a href="/login" class="btn btn-inverse">
                    <i class="icon-user icon-white"></i> Sign in
                  </a>
                </div>
              </div>
            </div>
            
          </div>
        </div>
          <div class="gts-site-header" data-gts-env-repository-view-state-path="/users/view_state/repository/5404.json">
  <div class="container">
    <div class="row">
                <h2 class="span">
            <a href="/qt">qt</a> /
            <a class="gts-repository-name-ph" href="/qt/qt">qt</a>
          </h2>

    </div>
    <div class="row">
      <div class="span">
                <div class="btn-group gts-repo-urls">
          <a class="btn gts-repo-url active" href="git@gitorious.org:qt/qt.git">SSH</a>
          <a class="btn gts-repo-url" href="https://git.gitorious.org/qt/qt.git">HTTPS</a>
          <a class="btn gts-repo-url" href="git://gitorious.org/qt/qt.git">Git</a>
          <input class="span4 gts-current-repo-url gts-select-onfocus" type="url" value="git@gitorious.org:qt/qt.git">
          <button data-toggle="collapse" data-target="#repo-url-help" class="gts-repo-url-help btn">?</button>
        </div>

      </div>
                <div class="pull-right">
            
            <div class="gts-watch-repository-ph gts-placeholder"></div>
            <div class="gts-clone-repository-ph gts-placeholder"></div>
          </div>

    </div>
    <div class="collapse gts-help row" id="repo-url-help">
                <div class="alert alert-info span pull-right">
            <p>
              To <strong>clone</strong> this repository:
            </p>
            <pre class="prettyprint">git clone git@gitorious.org:qt/qt.git</pre>
            <p>
              To <strong>push</strong> to this repository:
            </p>
            <pre class="prettyprint"># Add a new remote
git remote add origin git@gitorious.org:qt/qt.git

# Push the master branch to the newly added origin, and configure
# this remote and branch as the default:
git push -u origin master

# From now on you can push master to the "origin" remote with:
git push</pre>
          </div>

    </div>
    <div class="row gts-description">
      <div class="span gts-repository-description-ph">
        <div class="gts-markup"><p>The official Qt source code repository.</p>
</div>
      </div>
    </div>
                <ul class="nav nav-tabs gts-header-nav gts-pjax" data-gts-active="source">
            <li class="active"><a href="/qt/qt/source/4.8:">Source code</a></li><li><a href="/qt/qt/activities">Activities</a></li><li><a href="/qt/qt/commits/1d24a83365c2360c064563c15cb09ec8e5f6670a">Commits</a></li><li><a href="/qt/qt/merge_requests">Merge requests <span class="count gts-mr-count-ph"></span></a></li><li><a href="/qt/qt/community">Community</a></li>
            <li class="gts-repository-admin-ph gts-placeholder"></li>
            <li class="gts-request-merge-ph gts-placeholder"></li>
          </ul>

  </div>
</div>

          <div class="container gts-body" id="gts-pjax-container">
  <div class="gts-file gts-browser">
    <div class="gts-ref-selector-ph"></div>
    <ul class="pull-right gts-blob-view">
      <li class="active">Blob content</li>
      <li><a href="/qt/qt/blame/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs/unsupported/macx-clang-libc++/qplatformdefs.h">Blame</a></li>
      <li><a href="/qt/qt/history/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs/unsupported/macx-clang-libc++/qplatformdefs.h">History</a></li>
      <li><a href="/qt/qt/raw/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs/unsupported/macx-clang-libc++/qplatformdefs.h">Raw blob</a></li>
    </ul>
              <ul class="breadcrumb">
            <li><a href="/qt/qt/source/1d24a83365c2360c064563c15cb09ec8e5f6670a:"><i class="icon icon-file"></i> /</a></li>
            <li><a href="/qt/qt/source/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs">mkspecs<span class="divider">/</span></a></li><li><a href="/qt/qt/source/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs/unsupported">unsupported<span class="divider">/</span></a></li><li><a href="/qt/qt/source/1d24a83365c2360c064563c15cb09ec8e5f6670a:mkspecs/unsupported/macx-clang-libc++">macx-clang-libc++<span class="divider">/</span></a></li><li class="active">qplatformdefs.h</li>
          </ul>

    <pre class="c prettyprint linenums"><ol class="linenums gts-lines"><li class="L1"><span class="line"><span class="cm">/****************************************************************************</span></span></li><li class="L2"><span class="line"><span class="cm">**</span></span></li><li class="L3"><span class="line"><span class="cm">** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).</span></span></li><li class="L4"><span class="line"><span class="cm">** Contact: http://www.qt-project.org/legal</span></span></li><li class="L5"><span class="line"><span class="cm">**</span></span></li><li class="L6"><span class="line"><span class="cm">** This file is part of the qmake spec of the Qt Toolkit.</span></span></li><li class="L7"><span class="line"><span class="cm">**</span></span></li><li class="L8"><span class="line"><span class="cm">** $QT_BEGIN_LICENSE:LGPL$</span></span></li><li class="L9"><span class="line"><span class="cm">** Commercial License Usage</span></span></li><li class="L10"><span class="line"><span class="cm">** Licensees holding valid commercial Qt licenses may use this file in</span></span></li><li class="L11"><span class="line"><span class="cm">** accordance with the commercial license agreement provided with the</span></span></li><li class="L12"><span class="line"><span class="cm">** Software or, alternatively, in accordance with the terms contained in</span></span></li><li class="L13"><span class="line"><span class="cm">** a written agreement between you and Digia.  For licensing terms and</span></span></li><li class="L14"><span class="line"><span class="cm">** conditions see http://qt.digia.com/licensing.  For further information</span></span></li><li class="L15"><span class="line"><span class="cm">** use the contact form at http://qt.digia.com/contact-us.</span></span></li><li class="L16"><span class="line"><span class="cm">**</span></span></li><li class="L17"><span class="line"><span class="cm">** GNU Lesser General Public License Usage</span></span></li><li class="L18"><span class="line"><span class="cm">** Alternatively, this file may be used under the terms of the GNU Lesser</span></span></li><li class="L19"><span class="line"><span class="cm">** General Public License version 2.1 as published by the Free Software</span></span></li><li class="L20"><span class="line"><span class="cm">** Foundation and appearing in the file LICENSE.LGPL included in the</span></span></li><li class="L21"><span class="line"><span class="cm">** packaging of this file.  Please review the following information to</span></span></li><li class="L22"><span class="line"><span class="cm">** ensure the GNU Lesser General Public License version 2.1 requirements</span></span></li><li class="L23"><span class="line"><span class="cm">** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.</span></span></li><li class="L24"><span class="line"><span class="cm">**</span></span></li><li class="L25"><span class="line"><span class="cm">** In addition, as a special exception, Digia gives you certain additional</span></span></li><li class="L26"><span class="line"><span class="cm">** rights.  These rights are described in the Digia Qt LGPL Exception</span></span></li><li class="L27"><span class="line"><span class="cm">** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.</span></span></li><li class="L28"><span class="line"><span class="cm">**</span></span></li><li class="L29"><span class="line"><span class="cm">** GNU General Public License Usage</span></span></li><li class="L30"><span class="line"><span class="cm">** Alternatively, this file may be used under the terms of the GNU</span></span></li><li class="L31"><span class="line"><span class="cm">** General Public License version 3.0 as published by the Free Software</span></span></li><li class="L32"><span class="line"><span class="cm">** Foundation and appearing in the file LICENSE.GPL included in the</span></span></li><li class="L33"><span class="line"><span class="cm">** packaging of this file.  Please review the following information to</span></span></li><li class="L34"><span class="line"><span class="cm">** ensure the GNU General Public License version 3.0 requirements will be</span></span></li><li class="L35"><span class="line"><span class="cm">** met: http://www.gnu.org/copyleft/gpl.html.</span></span></li><li class="L36"><span class="line"><span class="cm">**</span></span></li><li class="L37"><span class="line"><span class="cm">**</span></span></li><li class="L38"><span class="line"><span class="cm">** $QT_END_LICENSE$</span></span></li><li class="L39"><span class="line"><span class="cm">**</span></span></li><li class="L40"><span class="line"><span class="cm">****************************************************************************/</span></span></li><li class="L41"><span class="line"> </span></li><li class="L42"><span class="line"><span class="cp">#ifndef QPLATFORMDEFS_H</span></span></li><li class="L43"><span class="line"><span class="cp">#define QPLATFORMDEFS_H</span></span></li><li class="L44"><span class="line"> </span></li><li class="L45"><span class="line"><span class="c1">// Get Qt defines/settings</span></span></li><li class="L46"><span class="line"> </span></li><li class="L47"><span class="line"><span class="cp">#include &quot;qglobal.h&quot;</span></span></li><li class="L48"><span class="line"> </span></li><li class="L49"><span class="line"><span class="c1">// Set any POSIX/XOPEN defines at the top of this file to turn on specific APIs</span></span></li><li class="L50"><span class="line"> </span></li><li class="L51"><span class="line"><span class="cp">#include &lt;unistd.h&gt;</span></span></li><li class="L52"><span class="line"> </span></li><li class="L53"><span class="line"> </span></li><li class="L54"><span class="line"><span class="c1">// We are hot - unistd.h should have turned on the specific APIs we requested</span></span></li><li class="L55"><span class="line"> </span></li><li class="L56"><span class="line"> </span></li><li class="L57"><span class="line"><span class="cp">#include &lt;pthread.h&gt;</span></span></li><li class="L58"><span class="line"><span class="cp">#include &lt;dirent.h&gt;</span></span></li><li class="L59"><span class="line"><span class="cp">#include &lt;fcntl.h&gt;</span></span></li><li class="L60"><span class="line"><span class="cp">#include &lt;grp.h&gt;</span></span></li><li class="L61"><span class="line"><span class="cp">#include &lt;pwd.h&gt;</span></span></li><li class="L62"><span class="line"><span class="cp">#include &lt;signal.h&gt;</span></span></li><li class="L63"><span class="line"><span class="cp">#define QT_NO_LIBRARY_UNLOAD</span></span></li><li class="L64"><span class="line"> </span></li><li class="L65"><span class="line"><span class="cp">#include &lt;sys/types.h&gt;</span></span></li><li class="L66"><span class="line"><span class="cp">#include &lt;sys/ioctl.h&gt;</span></span></li><li class="L67"><span class="line"><span class="cp">#include &lt;sys/ipc.h&gt;</span></span></li><li class="L68"><span class="line"><span class="cp">#include &lt;sys/time.h&gt;</span></span></li><li class="L69"><span class="line"><span class="cp">#include &lt;sys/shm.h&gt;</span></span></li><li class="L70"><span class="line"><span class="cp">#include &lt;sys/socket.h&gt;</span></span></li><li class="L71"><span class="line"><span class="cp">#include &lt;sys/stat.h&gt;</span></span></li><li class="L72"><span class="line"><span class="cp">#include &lt;sys/wait.h&gt;</span></span></li><li class="L73"><span class="line"><span class="cp">#include &lt;netinet/in.h&gt;</span></span></li><li class="L74"><span class="line"><span class="cp">#ifndef QT_NO_IPV6IFNAME</span></span></li><li class="L75"><span class="line"><span class="cp">#include &lt;net/if.h&gt;</span></span></li><li class="L76"><span class="line"><span class="cp">#endif</span></span></li><li class="L77"><span class="line"> </span></li><li class="L78"><span class="line"><span class="cp">#include &quot;../../common/posix/qplatformdefs.h&quot;</span></span></li><li class="L79"><span class="line"> </span></li><li class="L80"><span class="line"><span class="cp">#undef QT_OPEN_LARGEFILE</span></span></li><li class="L81"><span class="line"><span class="cp">#undef QT_SOCKLEN_T</span></span></li><li class="L82"><span class="line"><span class="cp">#undef QT_SIGNAL_IGNORE</span></span></li><li class="L83"><span class="line"> </span></li><li class="L84"><span class="line"><span class="cp">#define QT_OPEN_LARGEFILE       0</span></span></li><li class="L85"><span class="line"> </span></li><li class="L86"><span class="line"><span class="cp">#if (MAC_OS_X_VERSION_MAX_ALLOWED &gt;= MAC_OS_X_VERSION_10_4)</span></span></li><li class="L87"><span class="line"><span class="cp">#define QT_SOCKLEN_T            socklen_t</span></span></li><li class="L88"><span class="line"><span class="cp">#else</span></span></li><li class="L89"><span class="line"><span class="cp">#define QT_SOCKLEN_T            int</span></span></li><li class="L90"><span class="line"><span class="cp">#endif</span></span></li><li class="L91"><span class="line"> </span></li><li class="L92"><span class="line"><span class="cp">#define QT_SIGNAL_IGNORE        (void (*)(int))1</span></span></li><li class="L93"><span class="line"> </span></li><li class="L94"><span class="line"><span class="cp">#define QT_SNPRINTF        ::snprintf</span></span></li><li class="L95"><span class="line"><span class="cp">#define QT_VSNPRINTF        ::vsnprintf</span></span></li><li class="L96"><span class="line"> </span></li><li class="L97"><span class="line"><span class="cp">#endif </span><span class="c1">// QPLATFORMDEFS_H</span></span></li></ol></pre>
  </div>
</div>

      </div>
    </div>
    <div class="footer">
      
<div class="container">
  <p class="pull-right gts-powered-by">
    <a href="http://getgitorious.com">
      <img alt="Powered by Gitorious" src="/assets/poweredby.png" title="Powered by Gitorious">
    </a>
  </p>
  <div class="row-fluid">
      <div class="span3">
        <ul>
          <li><a href="/">Home</a></li>
          <li><a href="/about">About Gitorious</a></li>
          <li><a href="http://qt.digia.com/">Qt by Digia</a></li>
        </ul>
      </div>
      <div class="span3">
        <ul>
          <li><a href="http://en.gitorious.org/tos">Terms of Service</a></li>
          <li><a href="http://en.gitorious.org/privacy_policy">Privacy Policy</a></li>
          <li><a href="http://gitorious.com">Professional Gitorious Services</a></li>
        </ul>
      </div>
      <div class="span3">
        <ul>
          <li><a href="http://en.gitorious.org/security">Security</a></li>
        </ul>
      </div>
  </div>
  <p>
    Gitorious is free software licensed under
    the <a href="http://www.gnu.org/licenses/agpl-3.0.html">GNU Affero
      General Public License (AGPL)</a> unless noted otherwise.
  </p>
  <p class="gts-com-plug">
    <a href="http://gitorious.com">Professional Gitorious services</a> - Git
    hosting at your company, custom features, support and more.
    <a href="http://gitorious.com">gitorious.com</a>.
  </p>
</div>

    </div>
    <script data-gts-env-user-view-state-path="/users/view_state.json"></script>
      <script
        data-gts-env-repository-refs-url="/qt/qt/refs"
        data-gts-env-commit-url-template="/qt/qt/commit/#{oid}">
      </script>
      <script src="/dist/js/gitorious3.min.js?1386160848"></script>
      <script src="/ui3/js/lib/jquery-ui/ui/jquery.ui.menu.js"></script>
      <script src="/ui3/js/lib/jquery-ui/ui/jquery.ui.autocomplete.js"></script>
      <script src="/ui3/js/lib/jquery-ui/ui/jquery.ui.datepicker.js"></script>
      <script src="/assets/issues/application.js"></script>
    
    
    <script>
      $(function() { $('.alert').append('<a class="close" data-dismiss="alert" href="#">&times;</a>').alert(); });
      gts.enableJS(document.documentElement);
    </script>
  </body>
</html>
