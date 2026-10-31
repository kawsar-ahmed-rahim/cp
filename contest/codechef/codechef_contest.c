<!DOCTYPE html>
<!-- saved from url=(0052)https://www.codechef.com/START232D/problems/VACCLOTH -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="ace-tomorrow-night">.ace-tomorrow-night .ace_gutter {background: #25282c;color: #C5C8C6}.ace-tomorrow-night .ace_print-margin {width: 1px;background: #25282c}.ace-tomorrow-night {background-color: #1D1F21;color: #C5C8C6}.ace-tomorrow-night .ace_cursor {color: #AEAFAD}.ace-tomorrow-night .ace_marker-layer .ace_selection {background: #373B41}.ace-tomorrow-night.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #1D1F21;}.ace-tomorrow-night .ace_marker-layer .ace_step {background: rgb(102, 82, 0)}.ace-tomorrow-night .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #4B4E55}.ace-tomorrow-night .ace_marker-layer .ace_active-line {background: #282A2E}.ace-tomorrow-night .ace_gutter-active-line {background-color: #282A2E}.ace-tomorrow-night .ace_marker-layer .ace_selected-word {border: 1px solid #373B41}.ace-tomorrow-night .ace_invisible {color: #4B4E55}.ace-tomorrow-night .ace_keyword,.ace-tomorrow-night .ace_meta,.ace-tomorrow-night .ace_storage,.ace-tomorrow-night .ace_storage.ace_type,.ace-tomorrow-night .ace_support.ace_type {color: #B294BB}.ace-tomorrow-night .ace_keyword.ace_operator {color: #8ABEB7}.ace-tomorrow-night .ace_constant.ace_character,.ace-tomorrow-night .ace_constant.ace_language,.ace-tomorrow-night .ace_constant.ace_numeric,.ace-tomorrow-night .ace_keyword.ace_other.ace_unit,.ace-tomorrow-night .ace_support.ace_constant,.ace-tomorrow-night .ace_variable.ace_parameter {color: #DE935F}.ace-tomorrow-night .ace_constant.ace_other {color: #CED1CF}.ace-tomorrow-night .ace_invalid {color: #CED2CF;background-color: #DF5F5F}.ace-tomorrow-night .ace_invalid.ace_deprecated {color: #CED2CF;background-color: #B798BF}.ace-tomorrow-night .ace_fold {background-color: #81A2BE;border-color: #C5C8C6}.ace-tomorrow-night .ace_entity.ace_name.ace_function,.ace-tomorrow-night .ace_support.ace_function,.ace-tomorrow-night .ace_variable {color: #81A2BE}.ace-tomorrow-night .ace_support.ace_class,.ace-tomorrow-night .ace_support.ace_type {color: #F0C674}.ace-tomorrow-night .ace_heading,.ace-tomorrow-night .ace_markup.ace_heading,.ace-tomorrow-night .ace_string {color: #B5BD68}.ace-tomorrow-night .ace_entity.ace_name.ace_tag,.ace-tomorrow-night .ace_entity.ace_other.ace_attribute-name,.ace-tomorrow-night .ace_meta.ace_tag,.ace-tomorrow-night .ace_string.ace_regexp,.ace-tomorrow-night .ace_variable {color: #CC6666}.ace-tomorrow-night .ace_comment {color: #969896}.ace-tomorrow-night .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWNgYGBgYHB3d/8PAAOIAdULw8qMAAAAAElFTkSuQmCC) right repeat-y}
/*# sourceURL=ace/css/ace-tomorrow-night */</style><style id="autocompletion.css">
.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #CAD6FA;
    z-index: 1;
}
.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #3a674e;
}
.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid #abbffe;
    margin-top: -1px;
    background: rgba(233,233,253,0.4);
    position: absolute;
    z-index: 2;
}
.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid rgba(109, 150, 13, 0.8);
    background: rgba(58, 103, 78, 0.62);
}
.ace_completion-meta {
    opacity: 0.5;
    margin-left: 0.9em;
}
.ace_completion-message {
    margin-left: 0.9em;
    color: blue;
}
.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #2d69c7;
}
.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #93ca12;
}
.ace_editor.ace_autocomplete {
    width: 300px;
    z-index: 200000;
    border: 1px lightgray solid;
    position: fixed;
    box-shadow: 2px 3px 5px rgba(0,0,0,.2);
    line-height: 1.4;
    background: #fefefe;
    color: #111;
}
.ace_dark.ace_editor.ace_autocomplete {
    border: 1px #484747 solid;
    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);
    line-height: 1.4;
    background: #25282c;
    color: #c1c1c1;
}
.ace_autocomplete .ace_text-layer  {
    width: calc(100% - 8px);
}
.ace_autocomplete .ace_line {
    display: flex;
    align-items: center;
}
.ace_autocomplete .ace_line > * {
    min-width: 0;
    flex: 0 0 auto;
}
.ace_autocomplete .ace_line .ace_ {
    flex: 0 1 auto;
    overflow: hidden;
    text-overflow: ellipsis;
}
.ace_autocomplete .ace_completion-spacer {
    flex: 1;
}
.ace_autocomplete.ace_loading:after  {
    content: "";
    position: absolute;
    top: 0px;
    height: 2px;
    width: 8%;
    background: blue;
    z-index: 100;
    animation: ace_progress 3s infinite linear;
    animation-delay: 300ms;
    transform: translateX(-100%) scaleX(1);
}
@keyframes ace_progress {
    0% { transform: translateX(-100%) scaleX(1) }
    50% { transform: translateX(625%) scaleX(2) } 
    100% { transform: translateX(1500%) scaleX(3) } 
}
@media (prefers-reduced-motion) {
    .ace_autocomplete.ace_loading:after {
        transform: translateX(625%) scaleX(2);
        animation: none;
     }
}

/*# sourceURL=ace/css/autocompletion.css */</style><style id="snippets.css">
.ace_snippet-marker {
    -moz-box-sizing: border-box;
    box-sizing: border-box;
    background: rgba(194, 193, 208, 0.09);
    border: 1px dotted rgba(211, 208, 235, 0.62);
    position: absolute;
}
/*# sourceURL=ace/css/snippets.css */</style><style id="error_marker.css">
    .error_widget_wrapper {
        background: inherit;
        color: inherit;
        border:none
    }
    .error_widget {
        border-top: solid 2px;
        border-bottom: solid 2px;
        margin: 5px 0;
        padding: 10px 40px;
        white-space: pre-wrap;
    }
    .error_widget.ace_error, .error_widget_arrow.ace_error{
        border-color: #ff5a5a
    }
    .error_widget.ace_warning, .error_widget_arrow.ace_warning{
        border-color: #F1D817
    }
    .error_widget.ace_info, .error_widget_arrow.ace_info{
        border-color: #5a5a5a
    }
    .error_widget.ace_ok, .error_widget_arrow.ace_ok{
        border-color: #5aaa5a
    }
    .error_widget_arrow {
        position: absolute;
        border: solid 5px;
        border-top-color: transparent!important;
        border-right-color: transparent!important;
        border-left-color: transparent!important;
        top: -5px;
    }

/*# sourceURL=ace/css/error_marker.css */</style><style id="ace-tm">.ace-tm .ace_gutter {
  background: #f0f0f0;
  color: #333;
}

.ace-tm .ace_print-margin {
  width: 1px;
  background: #e8e8e8;
}

.ace-tm .ace_fold {
    background-color: #6B72E6;
}

.ace-tm {
  background-color: #FFFFFF;
  color: black;
}

.ace-tm .ace_cursor {
  color: black;
}
        
.ace-tm .ace_invisible {
  color: rgb(191, 191, 191);
}

.ace-tm .ace_storage,
.ace-tm .ace_keyword {
  color: blue;
}

.ace-tm .ace_constant {
  color: rgb(197, 6, 11);
}

.ace-tm .ace_constant.ace_buildin {
  color: rgb(88, 72, 246);
}

.ace-tm .ace_constant.ace_language {
  color: rgb(88, 92, 246);
}

.ace-tm .ace_constant.ace_library {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_invalid {
  background-color: rgba(255, 0, 0, 0.1);
  color: red;
}

.ace-tm .ace_support.ace_function {
  color: rgb(60, 76, 114);
}

.ace-tm .ace_support.ace_constant {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_support.ace_type,
.ace-tm .ace_support.ace_class {
  color: rgb(109, 121, 222);
}

.ace-tm .ace_keyword.ace_operator {
  color: rgb(104, 118, 135);
}

.ace-tm .ace_string {
  color: rgb(3, 106, 7);
}

.ace-tm .ace_comment {
  color: rgb(76, 136, 107);
}

.ace-tm .ace_comment.ace_doc {
  color: rgb(0, 102, 255);
}

.ace-tm .ace_comment.ace_doc.ace_tag {
  color: rgb(128, 159, 191);
}

.ace-tm .ace_constant.ace_numeric {
  color: rgb(0, 0, 205);
}

.ace-tm .ace_variable {
  color: rgb(49, 132, 149);
}

.ace-tm .ace_xml-pe {
  color: rgb(104, 104, 91);
}

.ace-tm .ace_entity.ace_name.ace_function {
  color: #0000A2;
}


.ace-tm .ace_heading {
  color: rgb(12, 7, 255);
}

.ace-tm .ace_list {
  color:rgb(185, 6, 144);
}

.ace-tm .ace_meta.ace_tag {
  color:rgb(0, 22, 142);
}

.ace-tm .ace_string.ace_regex {
  color: rgb(255, 0, 0)
}

.ace-tm .ace_marker-layer .ace_selection {
  background: rgb(181, 213, 255);
}
.ace-tm.ace_multiselect .ace_selection.ace_start {
  box-shadow: 0 0 3px 0px white;
}
.ace-tm .ace_marker-layer .ace_step {
  background: rgb(252, 255, 0);
}

.ace-tm .ace_marker-layer .ace_stack {
  background: rgb(164, 229, 101);
}

.ace-tm .ace_marker-layer .ace_bracket {
  margin: -1px 0 0 -1px;
  border: 1px solid rgb(192, 192, 192);
}

.ace-tm .ace_marker-layer .ace_active-line {
  background: rgba(0, 0, 0, 0.07);
}

.ace-tm .ace_gutter-active-line {
    background-color : #dcdcdc;
}

.ace-tm .ace_marker-layer .ace_selected-word {
  background: rgb(250, 250, 255);
  border: 1px solid rgb(200, 200, 250);
}

.ace-tm .ace_indent-guide {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;
}

.ace-tm .ace_indent-guide-active {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAAZSURBVHjaYvj///9/hivKyv8BAAAA//8DACLqBhbvk+/eAAAAAElFTkSuQmCC") right repeat-y;
}

/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">
.ace_br1 {border-top-left-radius    : 3px;}
.ace_br2 {border-top-right-radius   : 3px;}
.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}
.ace_br4 {border-bottom-right-radius: 3px;}
.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}
.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}
.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}
.ace_br8 {border-bottom-left-radius : 3px;}
.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}
.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}
.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}
.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}


.ace_editor {
    position: relative;
    overflow: hidden;
    padding: 0;
    font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'Source Code Pro', 'source-code-pro', monospace;
    direction: ltr;
    text-align: left;
    -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
    forced-color-adjust: none;
}

.ace_scroller {
    position: absolute;
    overflow: hidden;
    top: 0;
    bottom: 0;
    background-color: inherit;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    cursor: text;
}

.ace_content {
    position: absolute;
    box-sizing: border-box;
    min-width: 100%;
    contain: style size layout;
    font-variant-ligatures: no-common-ligatures;
}
.ace_invisible {
    font-variant-ligatures: none;
}

.ace_keyboard-focus:focus {
    box-shadow: inset 0 0 0 2px #5E9ED6;
    outline: none;
}

.ace_dragging .ace_scroller:before{
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    content: '';
    background: rgba(250, 250, 250, 0.01);
    z-index: 1000;
}
.ace_dragging.ace_dark .ace_scroller:before{
    background: rgba(0, 0, 0, 0.01);
}

.ace_gutter {
    position: absolute;
    overflow : hidden;
    width: auto;
    top: 0;
    bottom: 0;
    left: 0;
    cursor: default;
    z-index: 4;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    contain: style size layout;
}

.ace_gutter-active-line {
    position: absolute;
    left: 0;
    right: 0;
}

.ace_scroller.ace_scroll-left:after {
    content: "";
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;
    pointer-events: none;
}

.ace_gutter-cell, .ace_gutter-cell_svg-icons {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    padding-left: 19px;
    padding-right: 6px;
    background-repeat: no-repeat;
}

.ace_gutter-cell_svg-icons .ace_gutter_annotation {
    margin-left: -14px;
    float: left;
}

.ace_gutter-cell .ace_gutter_annotation {
    margin-left: -19px;
    float: left;
}

.ace_gutter-cell.ace_error, .ace_icon.ace_error, .ace_icon.ace_error_fold, .ace_gutter-cell.ace_security, .ace_icon.ace_security, .ace_icon.ace_security_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_warning, .ace_icon.ace_warning, .ace_icon.ace_warning_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_info, .ace_icon.ace_info, .ace_gutter-cell.ace_hint, .ace_icon.ace_hint {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_dark .ace_gutter-cell.ace_info, .ace_dark .ace_icon.ace_info, .ace_dark .ace_gutter-cell.ace_hint, .ace_dark .ace_icon.ace_hint {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");
}

.ace_icon_svg.ace_error {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJyZWQiIHNoYXBlLXJlbmRlcmluZz0iZ2VvbWV0cmljUHJlY2lzaW9uIj4KPGNpcmNsZSBmaWxsPSJub25lIiBjeD0iOCIgY3k9IjgiIHI9IjciIHN0cm9rZS1saW5lam9pbj0icm91bmQiLz4KPGxpbmUgeDE9IjExIiB5MT0iNSIgeDI9IjUiIHkyPSIxMSIvPgo8bGluZSB4MT0iMTEiIHkxPSIxMSIgeDI9IjUiIHkyPSI1Ii8+CjwvZz4KPC9zdmc+");
    background-color: crimson;
}
.ace_icon_svg.ace_security {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB2aWV3Qm94PSIwIDAgMjAgMTYiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+CiAgICA8ZyBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZT0iZGFya29yYW5nZSIgZmlsbD0ibm9uZSIgc2hhcGUtcmVuZGVyaW5nPSJnZW9tZXRyaWNQcmVjaXNpb24iPgogICAgICAgIDxwYXRoIGNsYXNzPSJzdHJva2UtbGluZWpvaW4tcm91bmQiIGQ9Ik04IDE0LjgzMDdDOCAxNC44MzA3IDIgMTIuOTA0NyAyIDguMDg5OTJWMy4yNjU0OEM1LjMxIDMuMjY1NDggNy45ODk5OSAxLjM0OTE4IDcuOTg5OTkgMS4zNDkxOEM3Ljk4OTk5IDEuMzQ5MTggMTAuNjkgMy4yNjU0OCAxNCAzLjI2NTQ4VjguMDg5OTJDMTQgMTIuOTA0NyA4IDE0LjgzMDcgOCAxNC44MzA3WiIvPgogICAgICAgIDxwYXRoIGQ9Ik0yIDguMDg5OTJWMy4yNjU0OEM1LjMxIDMuMjY1NDggNy45ODk5OSAxLjM0OTE4IDcuOTg5OTkgMS4zNDkxOCIvPgogICAgICAgIDxwYXRoIGQ9Ik0xMy45OSA4LjA4OTkyVjMuMjY1NDhDMTAuNjggMy4yNjU0OCA4IDEuMzQ5MTggOCAxLjM0OTE4Ii8+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTggNFY5Ii8+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTggMTBWMTIiLz4KICAgIDwvZz4KPC9zdmc+");
    background-color: crimson;
}
.ace_icon_svg.ace_warning {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJkYXJrb3JhbmdlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+Cjxwb2x5Z29uIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGZpbGw9Im5vbmUiIHBvaW50cz0iOCAxIDE1IDE1IDEgMTUgOCAxIi8+CjxyZWN0IHg9IjgiIHk9IjEyIiB3aWR0aD0iMC4wMSIgaGVpZ2h0PSIwLjAxIi8+CjxsaW5lIHgxPSI4IiB5MT0iNiIgeDI9IjgiIHkyPSIxMCIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: darkorange;
}
.ace_icon_svg.ace_info {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJibHVlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+CjxjaXJjbGUgZmlsbD0ibm9uZSIgY3g9IjgiIGN5PSI4IiByPSI3IiBzdHJva2UtbGluZWpvaW49InJvdW5kIi8+Cjxwb2x5bGluZSBwb2ludHM9IjggMTEgOCA4Ii8+Cjxwb2x5bGluZSBwb2ludHM9IjkgOCA2IDgiLz4KPGxpbmUgeDE9IjEwIiB5MT0iMTEiIHgyPSI2IiB5Mj0iMTEiLz4KPHJlY3QgeD0iOCIgeT0iNSIgd2lkdGg9IjAuMDEiIGhlaWdodD0iMC4wMSIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: royalblue;
}
.ace_icon_svg.ace_hint {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB2aWV3Qm94PSIwIDAgMjAgMTYiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+CiAgICA8ZyBzdHJva2Utd2lkdGg9IjIiIHN0cm9rZT0ic2lsdmVyIiBmaWxsPSJub25lIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+CiAgICAgICAgPHBhdGggY2xhc3M9InN0cm9rZS1saW5lam9pbi1yb3VuZCIgZD0iTTYgMTRIMTAiLz4KICAgICAgICA8cGF0aCBkPSJNOCAxMUg5QzkgOS40NzAwMiAxMiA4LjU0MDAyIDEyIDUuNzYwMDJDMTIuMDIgNC40MDAwMiAxMS4zOSAzLjM2MDAyIDEwLjQzIDIuNjcwMDJDOSAxLjY0MDAyIDcuMDAwMDEgMS42NDAwMiA1LjU3MDAxIDIuNjcwMDJDNC42MTAwMSAzLjM2MDAyIDMuOTggNC40MDAwMiA0IDUuNzYwMDJDNCA4LjU0MDAyIDcuMDAwMDEgOS40NzAwMiA3LjAwMDAxIDExSDhaIi8+CiAgICA8L2c+Cjwvc3ZnPg==");
    background-color: silver;
}

.ace_icon_svg.ace_error_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSI+CiAgPHBhdGggZD0ibSAxOC45Mjk4NTEsNy44Mjk4MDc2IGMgMC4xNDYzNTMsNi4zMzc0NjA0IC02LjMyMzE0Nyw3Ljc3Nzg0NDQgLTcuNDc3OTEyLDcuNzc3ODQ0NCAtMi4xMDcyNzI2LC0wLjEyODc1IDUuMTE3Njc4LDAuMzU2MjQ5IDUuMDUxNjk4LC03Ljg3MDA2MTggLTAuNjA0NjcyLC04LjAwMzk3MzQ5IC03LjA3NzI3MDYsLTcuNTYzMTE4OSAtNC44NTczLC03LjQzMDM5NTU2IDEuNjA2LC0wLjExNTE0MjI1IDYuODk3NDg1LDEuMjYyNTQ1OTYgNy4yODM1MTQsNy41MjI2MTI5NiB6IiBmaWxsPSJjcmltc29uIiBzdHJva2Utd2lkdGg9IjIiLz4KICA8cGF0aCBmaWxsLXJ1bGU9ImV2ZW5vZGQiIGNsaXAtcnVsZT0iZXZlbm9kZCIgZD0ibSA4LjExNDc1NjIsMi4wNTI5ODI4IGMgMy4zNDkxNjk4LDAgNi4wNjQxMzI4LDIuNjc2ODYyNyA2LjA2NDEzMjgsNS45Nzg5NTMgMCwzLjMwMjExMjIgLTIuNzE0OTYzLDUuOTc4OTIwMiAtNi4wNjQxMzI4LDUuOTc4OTIwMiAtMy4zNDkxNDczLDAgLTYuMDY0MTc3MiwtMi42NzY4MDggLTYuMDY0MTc3MiwtNS45Nzg5MjAyIDAuMDA1MzksLTMuMjk5ODg2MSAyLjcxNzI2NTYsLTUuOTczNjQwOCA2LjA2NDE3NzIsLTUuOTc4OTUzIHogbSAwLC0xLjczNTgyNzE5IGMgLTQuMzIxNDgzNiwwIC03LjgyNDc0MDM4LDMuNDU0MDE4NDkgLTcuODI0NzQwMzgsNy43MTQ3ODAxOSAwLDQuMjYwNzI4MiAzLjUwMzI1Njc4LDcuNzE0NzQ1MiA3LjgyNDc0MDM4LDcuNzE0NzQ1MiA0LjMyMTQ0OTgsMCA3LjgyNDY5OTgsLTMuNDU0MDE3IDcuODI0Njk5OCwtNy43MTQ3NDUyIDAsLTIuMDQ2MDkxNCAtMC44MjQzOTIsLTQuMDA4MzY3MiAtMi4yOTE3NTYsLTUuNDU1MTc0NiBDIDEyLjE4MDIyNSwxLjEyOTk2NDggMTAuMTkwMDEzLDAuMzE3MTU1NjEgOC4xMTQ3NTYyLDAuMzE3MTU1NjEgWiBNIDYuOTM3NDU2Myw4LjI0MDU5ODUgNC42NzE4Njg1LDEwLjQ4NTg1MiA2LjAwODY4MTQsMTEuODc2NzI4IDguMzE3MDAzNSw5LjYwMDc5MTEgMTAuNjI1MzM3LDExLjg3NjcyOCAxMS45NjIxMzgsMTAuNDg1ODUyIDkuNjk2NTUwOCw4LjI0MDU5ODUgMTEuOTYyMTM4LDYuMDA2ODA2NiAxMC41NzMyNDYsNC42Mzc0MzM1IDguMzE3MDAzNSw2Ljg3MzQyOTcgNi4wNjA3NjA3LDQuNjM3NDMzNSA0LjY3MTg2ODUsNi4wMDY4MDY2IFoiIGZpbGw9ImNyaW1zb24iIHN0cm9rZS13aWR0aD0iMiIvPgo8L3N2Zz4=");
    background-color: crimson;
}
.ace_icon_svg.ace_security_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,CjxzdmcgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMTcgMTQiIGZpbGw9Im5vbmUiPgogICAgPHBhdGggZD0iTTEwLjAwMDEgMTMuNjk5MkMxMC4wMDAxIDEzLjY5OTIgMTEuOTI0MSAxMy40NzYzIDEzIDEyLjY5OTJDMTQuNDEzOSAxMS42NzgxIDE2IDEwLjUgMTYuMTI1MSA2LjgxMTI2VjIuNTg5ODdDMTYuMTI1MSAyLjU0NzY4IDE2LjEyMjEgMi41MDYxOSAxNi4xMTY0IDIuNDY1NTlWMS43MTQ4NUgxNS4yNDE0TDE1LjIzMDcgMS43MTQ4NEwxNC42MjUxIDEuNjk5MjJWNi44MTEyM0MxNC42MjUxIDguNTEwNjEgMTQuNjI1MSA5LjQ2NDYxIDEyLjc4MjQgMTEuNzIxQzEyLjE1ODYgMTIuNDg0OCAxMC4wMDAxIDEzLjY5OTIgMTAuMDAwMSAxMy42OTkyWiIgZmlsbD0iY3JpbXNvbiIgc3Ryb2tlLXdpZHRoPSIyIi8+CiAgICA8cGF0aCBmaWxsLXJ1bGU9ImV2ZW5vZGQiIGNsaXAtcnVsZT0iZXZlbm9kZCIgZD0iTTcuMzM2MDkgMC4zNjc0NzVDNy4wMzIxNCAwLjE1MjY1MiA2LjYyNTQ4IDAuMTUzNjE0IDYuMzIyNTMgMC4zNjk5OTdMNi4zMDg2OSAwLjM3OTU1NEM2LjI5NTUzIDAuMzg4NTg4IDYuMjczODggMC40MDMyNjYgNi4yNDQxNyAwLjQyMjc4OUM2LjE4NDcxIDAuNDYxODYgNi4wOTMyMSAwLjUyMDE3MSA1Ljk3MzEzIDAuNTkxMzczQzUuNzMyNTEgMC43MzQwNTkgNS4zNzk5IDAuOTI2ODY0IDQuOTQyNzkgMS4xMjAwOUM0LjA2MTQ0IDEuNTA5NyAyLjg3NTQxIDEuODgzNzcgMS41ODk4NCAxLjg4Mzc3SDAuNzE0ODQ0VjIuNzU4NzdWNi45ODAxNUMwLjcxNDg0NCA5LjQ5Mzc0IDIuMjg4NjYgMTEuMTk3MyAzLjcwMjU0IDEyLjIxODVDNC40MTg0NSAxMi43MzU1IDUuMTI4NzQgMTMuMTA1MyA1LjY1NzMzIDEzLjM0NTdDNS45MjI4NCAxMy40NjY0IDYuMTQ1NjYgMTMuNTU1OSA2LjMwNDY1IDEzLjYxNjFDNi4zODQyMyAxMy42NDYyIDYuNDQ4MDUgMTMuNjY5IDYuNDkzNDkgMTMuNjg0OEM2LjUxNjIyIDEzLjY5MjcgNi41MzQzOCAxMy42OTg5IDYuNTQ3NjQgMTMuNzAzM0w2LjU2MzgyIDEzLjcwODdMNi41NjkwOCAxMy43MTA0TDYuNTcwOTkgMTMuNzExTDYuODM5ODQgMTMuNzUzM0w2LjU3MjQyIDEzLjcxMTVDNi43NDYzMyAxMy43NjczIDYuOTMzMzUgMTMuNzY3MyA3LjEwNzI3IDEzLjcxMTVMNy4xMDg3IDEzLjcxMUw3LjExMDYxIDEzLjcxMDRMNy4xMTU4NyAxMy43MDg3TDcuMTMyMDUgMTMuNzAzM0M3LjE0NTMxIDEzLjY5ODkgNy4xNjM0NiAxMy42OTI3IDcuMTg2MTkgMTMuNjg0OEM3LjIzMTY0IDEzLjY2OSA3LjI5NTQ2IDEzLjY0NjIgNy4zNzUwMyAxMy42MTYxQzcuNTM0MDMgMTMuNTU1OSA3Ljc1Njg1IDEzLjQ2NjQgOC4wMjIzNiAxMy4zNDU3QzguNTUwOTUgMTMuMTA1MyA5LjI2MTIzIDEyLjczNTUgOS45NzcxNSAxMi4yMTg1QzExLjM5MSAxMS4xOTczIDEyLjk2NDggOS40OTM3NyAxMi45NjQ4IDYuOTgwMThWMi43NTg4QzEyLjk2NDggMi43MTY2IDEyLjk2MTkgMi42NzUxMSAxMi45NTYxIDIuNjM0NTFWMS44ODM3N0gxMi4wODExQzEyLjA3NzUgMS44ODM3NyAxMi4wNzQgMS44ODM3NyAxMi4wNzA0IDEuODgzNzdDMTAuNzk3OSAxLjg4MDA0IDkuNjE5NjIgMS41MTEwMiA4LjczODk0IDEuMTI0ODZDOC43MzUzNCAxLjEyMzI3IDguNzMxNzQgMS4xMjE2OCA4LjcyODE0IDEuMTIwMDlDOC4yOTEwMyAwLjkyNjg2NCA3LjkzODQyIDAuNzM0MDU5IDcuNjk3NzkgMC41OTEzNzNDNy41Nzc3MiAwLjUyMDE3MSA3LjQ4NjIyIDAuNDYxODYgNy40MjY3NiAwLjQyMjc4OUM3LjM5NzA1IDAuNDAzMjY2IDcuMzc1MzkgMC4zODg1ODggNy4zNjIyNCAwLjM3OTU1NEw3LjM0ODk2IDAuMzcwMzVDNy4zNDg5NiAwLjM3MDM1IDcuMzQ4NDcgMC4zNzAwMiA3LjM0NTYzIDAuMzc0MDU0TDcuMzM3NzkgMC4zNjg2NTlMNy4zMzYwOSAwLjM2NzQ3NVpNOC4wMzQ3MSAyLjcyNjkxQzguODYwNCAzLjA5MDYzIDkuOTYwNjYgMy40NjMwOSAxMS4yMDYxIDMuNTg5MDdWNi45ODAxNUgxMS4yMTQ4QzExLjIxNDggOC42Nzk1MyAxMC4xNjM3IDkuOTI1MDcgOC45NTI1NCAxMC43OTk4QzguMzU1OTUgMTEuMjMwNiA3Ljc1Mzc0IDExLjU0NTQgNy4yOTc5NiAxMS43NTI3QzcuMTE2NzEgMTEuODM1MSA2Ljk2MDYyIDExLjg5OTYgNi44Mzk4NCAxMS45NDY5QzYuNzE5MDYgMTEuODk5NiA2LjU2Mjk3IDExLjgzNTEgNi4zODE3MyAxMS43NTI3QzUuOTI1OTUgMTEuNTQ1NCA1LjMyMzczIDExLjIzMDYgNC43MjcxNSAxMC43OTk4QzMuNTE2MDMgOS45MjUwNyAyLjQ2NDg0IDguNjc5NTUgMi40NjQ4NCA2Ljk4MDE4VjMuNTg5MDlDMy43MTczOCAzLjQ2MjM5IDQuODIzMDggMy4wODYzOSA1LjY1MDMzIDIuNzIwNzFDNi4xNDIyOCAyLjUwMzI0IDYuNTQ0ODUgMi4yODUzNyA2LjgzMjU0IDIuMTE2MjRDNy4xMjE4MSAyLjI4NTM1IDcuNTI3IDIuNTAzNTIgOC4wMjE5NiAyLjcyMTMxQzguMDI2MiAyLjcyMzE3IDguMDMwNDUgMi43MjUwNCA4LjAzNDcxIDIuNzI2OTFaTTUuOTY0ODQgMy40MDE0N1Y3Ljc3NjQ3SDcuNzE0ODRWMy40MDE0N0g1Ljk2NDg0Wk01Ljk2NDg0IDEwLjQwMTVWOC42NTE0N0g3LjcxNDg0VjEwLjQwMTVINS45NjQ4NFoiIGZpbGw9ImNyaW1zb24iIHN0cm9rZS13aWR0aD0iMiIvPgo8L3N2Zz4=");
    background-color: crimson;
}
.ace_icon_svg.ace_warning_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjAiIGhlaWdodD0iMTYiIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj4KPHBhdGggZmlsbC1ydWxlPSJldmVub2RkIiBjbGlwLXJ1bGU9ImV2ZW5vZGQiIGQ9Ik0xNC43NzY5IDE0LjczMzdMOC42NTE5MiAyLjQ4MzY5QzguMzI5NDYgMS44Mzg3NyA3LjQwOTEzIDEuODM4NzcgNy4wODY2NyAyLjQ4MzY5TDAuOTYxNjY5IDE0LjczMzdDMC42NzA3NzUgMTUuMzE1NSAxLjA5MzgzIDE2IDEuNzQ0MjkgMTZIMTMuOTk0M0MxNC42NDQ4IDE2IDE1LjA2NzggMTUuMzE1NSAxNC43NzY5IDE0LjczMzdaTTMuMTYwMDcgMTQuMjVMNy44NjkyOSA0LjgzMTU2TDEyLjU3ODUgMTQuMjVIMy4xNjAwN1pNOC43NDQyOSAxMS42MjVWMTMuMzc1SDYuOTk0MjlWMTEuNjI1SDguNzQ0MjlaTTYuOTk0MjkgMTAuNzVWNy4yNUg4Ljc0NDI5VjEwLjc1SDYuOTk0MjlaIiBmaWxsPSIjRUM3MjExIi8+CjxwYXRoIGQ9Ik0xMS4xOTkxIDIuOTUyMzhDMTAuODgwOSAyLjMxNDY3IDEwLjM1MzcgMS44MDUyNiA5LjcwNTUgMS41MDlMMTEuMDQxIDEuMDY5NzhDMTEuNjg4MyAwLjk0OTgxNCAxMi4zMzcgMS4yNzI2MyAxMi42MzE3IDEuODYxNDFMMTcuNjEzNiAxMS44MTYxQzE4LjM1MjcgMTMuMjkyOSAxNy41OTM4IDE1LjA4MDQgMTYuMDE4IDE1LjU3NDVDMTYuNDA0NCAxNC40NTA3IDE2LjMyMzEgMTMuMjE4OCAxNS43OTI0IDEyLjE1NTVMMTEuMTk5MSAyLjk1MjM4WiIgZmlsbD0iI0VDNzIxMSIvPgo8L3N2Zz4=");
    background-color: darkorange;
}

.ace_scrollbar {
    contain: strict;
    position: absolute;
    right: 0;
    bottom: 0;
    z-index: 6;
}

.ace_scrollbar-inner {
    position: absolute;
    cursor: text;
    left: 0;
    top: 0;
}

.ace_scrollbar-v{
    overflow-x: hidden;
    overflow-y: scroll;
    top: 0;
}

.ace_scrollbar-h {
    overflow-x: scroll;
    overflow-y: hidden;
    left: 0;
}

.ace_print-margin {
    position: absolute;
    height: 100%;
}

.ace_text-input {
    position: absolute;
    z-index: 0;
    width: 0.5em;
    height: 1em;
    opacity: 0;
    background: transparent;
    -moz-appearance: none;
    appearance: none;
    border: none;
    resize: none;
    outline: none;
    overflow: hidden;
    font: inherit;
    padding: 0 1px;
    margin: 0 -1px;
    contain: strict;
    -ms-user-select: text;
    -moz-user-select: text;
    -webkit-user-select: text;
    user-select: text;
    /*with `pre-line` chrome inserts &nbsp; instead of space*/
    white-space: pre!important;
}
.ace_text-input.ace_composition {
    background: transparent;
    color: inherit;
    z-index: 1000;
    opacity: 1;
}
.ace_composition_placeholder { color: transparent }
.ace_composition_marker { 
    border-bottom: 1px solid;
    position: absolute;
    border-radius: 0;
    margin-top: 1px;
}

[ace_nocontext=true] {
    transform: none!important;
    filter: none!important;
    clip-path: none!important;
    mask : none!important;
    contain: none!important;
    perspective: none!important;
    mix-blend-mode: initial!important;
    z-index: auto;
}

.ace_layer {
    z-index: 1;
    position: absolute;
    overflow: hidden;
    /* workaround for chrome bug https://github.com/ajaxorg/ace/issues/2312*/
    word-wrap: normal;
    white-space: pre;
    height: 100%;
    width: 100%;
    box-sizing: border-box;
    /* setting pointer-events: auto; on node under the mouse, which changes
        during scroll, will break mouse wheel scrolling in Safari */
    pointer-events: none;
}

.ace_gutter-layer {
    position: relative;
    width: auto;
    text-align: right;
    pointer-events: auto;
    height: 1000000px;
    contain: style size layout;
}

.ace_text-layer {
    font: inherit !important;
    position: absolute;
    height: 1000000px;
    width: 1000000px;
    contain: style size layout;
}

.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {
    contain: style size layout;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
}

.ace_hidpi .ace_text-layer,
.ace_hidpi .ace_gutter-layer,
.ace_hidpi .ace_content,
.ace_hidpi .ace_gutter {
    contain: strict;
}
.ace_hidpi .ace_text-layer > .ace_line, 
.ace_hidpi .ace_text-layer > .ace_line_group {
    contain: strict;
}

.ace_cjk {
    display: inline-block;
    text-align: center;
}

.ace_cursor-layer {
    z-index: 4;
}

.ace_cursor {
    z-index: 4;
    position: absolute;
    box-sizing: border-box;
    border-left: 2px solid;
    /* workaround for smooth cursor repaintng whole screen in chrome */
    transform: translatez(0);
}

.ace_multiselect .ace_cursor {
    border-left-width: 1px;
}

.ace_slim-cursors .ace_cursor {
    border-left-width: 1px;
}

.ace_overwrite-cursors .ace_cursor {
    border-left-width: 0;
    border-bottom: 1px solid;
}

.ace_hidden-cursors .ace_cursor {
    opacity: 0.2;
}

.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {
    opacity: 0;
}

.ace_smooth-blinking .ace_cursor {
    transition: opacity 0.18s;
}

.ace_animate-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: step-end;
    animation-name: blink-ace-animate;
    animation-iteration-count: infinite;
}

.ace_animate-blinking.ace_smooth-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: ease-in-out;
    animation-name: blink-ace-animate-smooth;
}
    
@keyframes blink-ace-animate {
    from, to { opacity: 1; }
    60% { opacity: 0; }
}

@keyframes blink-ace-animate-smooth {
    from, to { opacity: 1; }
    45% { opacity: 1; }
    60% { opacity: 0; }
    85% { opacity: 0; }
}

.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {
    position: absolute;
    z-index: 3;
}

.ace_marker-layer .ace_selection {
    position: absolute;
    z-index: 5;
}

.ace_marker-layer .ace_bracket {
    position: absolute;
    z-index: 6;
}

.ace_marker-layer .ace_error_bracket {
    position: absolute;
    border-bottom: 1px solid #DE5555;
    border-radius: 0;
}

.ace_marker-layer .ace_active-line {
    position: absolute;
    z-index: 2;
}

.ace_marker-layer .ace_selected-word {
    position: absolute;
    z-index: 4;
    box-sizing: border-box;
}

.ace_line .ace_fold {
    box-sizing: border-box;

    display: inline-block;
    height: 11px;
    margin-top: -2px;
    vertical-align: middle;

    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");
    background-repeat: no-repeat, repeat-x;
    background-position: center center, top left;
    color: transparent;

    border: 1px solid black;
    border-radius: 2px;

    cursor: pointer;
    pointer-events: auto;
}

.ace_dark .ace_fold {
}

.ace_fold:hover{
    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");
}

.ace_tooltip {
    background-color: #f5f5f5;
    border: 1px solid gray;
    border-radius: 1px;
    box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);
    color: black;
    padding: 3px 4px;
    position: fixed;
    z-index: 999999;
    box-sizing: border-box;
    cursor: default;
    white-space: pre-wrap;
    word-wrap: break-word;
    line-height: normal;
    font-style: normal;
    font-weight: normal;
    letter-spacing: normal;
    pointer-events: none;
    overflow: auto;
    max-width: min(33em, 66vw);
    overscroll-behavior: contain;
}
.ace_tooltip pre {
    white-space: pre-wrap;
}

.ace_tooltip.ace_dark {
    background-color: #636363;
    color: #fff;
}

.ace_tooltip:focus {
    outline: 1px solid #5E9ED6;
}

.ace_icon {
    display: inline-block;
    width: 18px;
    vertical-align: top;
}

.ace_icon_svg {
    display: inline-block;
    width: 12px;
    vertical-align: top;
    -webkit-mask-repeat: no-repeat;
    -webkit-mask-size: 12px;
    -webkit-mask-position: center;
}

.ace_folding-enabled > .ace_gutter-cell, .ace_folding-enabled > .ace_gutter-cell_svg-icons {
    padding-right: 13px;
}

.ace_fold-widget, .ace_custom-widget {
    box-sizing: border-box;

    margin: 0 -12px 0 1px;
    display: none;
    width: 11px;
    vertical-align: top;

    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: center;

    border-radius: 3px;
    
    border: 1px solid transparent;
    cursor: pointer;
    pointer-events: auto;
}

.ace_custom-widget {
    background: none;
}

.ace_folding-enabled .ace_fold-widget {
    display: inline-block;   
}

.ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");
}

.ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");
}

.ace_fold-widget:hover {
    border: 1px solid rgba(0, 0, 0, 0.3);
    background-color: rgba(255, 255, 255, 0.2);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);
}

.ace_fold-widget:active {
    border: 1px solid rgba(0, 0, 0, 0.4);
    background-color: rgba(0, 0, 0, 0.05);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);
}
/**
 * Dark version for fold widgets
 */
.ace_dark .ace_fold-widget {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");
}
.ace_dark .ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget:hover {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
    background-color: rgba(255, 255, 255, 0.1);
}
.ace_dark .ace_fold-widget:active {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
}

.ace_inline_button {
    border: 1px solid lightgray;
    display: inline-block;
    margin: -1px 8px;
    padding: 0 5px;
    pointer-events: auto;
    cursor: pointer;
}
.ace_inline_button:hover {
    border-color: gray;
    background: rgba(200,200,200,0.2);
    display: inline-block;
    pointer-events: auto;
}

.ace_fold-widget.ace_invalid {
    background-color: #FFB4B4;
    border-color: #DE5555;
}

.ace_fade-fold-widgets .ace_fold-widget {
    transition: opacity 0.4s ease 0.05s;
    opacity: 0;
}

.ace_fade-fold-widgets:hover .ace_fold-widget {
    transition: opacity 0.05s ease 0.05s;
    opacity:1;
}

.ace_underline {
    text-decoration: underline;
}

.ace_bold {
    font-weight: bold;
}

.ace_nobold .ace_bold {
    font-weight: normal;
}

.ace_italic {
    font-style: italic;
}


.ace_error-marker {
    background-color: rgba(255, 0, 0,0.2);
    position: absolute;
    z-index: 9;
}

.ace_highlight-marker {
    background-color: rgba(255, 255, 0,0.2);
    position: absolute;
    z-index: 8;
}

.ace_mobile-menu {
    position: absolute;
    line-height: 1.5;
    border-radius: 4px;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    background: white;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #dcdcdc;
    color: black;
}
.ace_dark > .ace_mobile-menu {
    background: #333;
    color: #ccc;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #444;

}
.ace_mobile-button {
    padding: 2px;
    cursor: pointer;
    overflow: hidden;
}
.ace_mobile-button:hover {
    background-color: #eee;
    opacity:1;
}
.ace_mobile-button:active {
    background-color: #ddd;
}

.ace_placeholder {
    position: relative;
    font-family: arial;
    transform: scale(0.9);
    transform-origin: left;
    white-space: pre;
    opacity: 0.7;
    margin: 0 10px;
    z-index: 1;
}

.ace_ghost_text {
    opacity: 0.5;
    font-style: italic;
}

.ace_ghost_text_container > div {
    white-space: pre;
}

.ghost_text_line_wrapped::after {
    content: "↩";
    position: absolute;
}

.ace_lineWidgetContainer.ace_ghost_text {
    margin: 0px 4px
}

.ace_screenreader-only {
    position:absolute;
    left:-10000px;
    top:auto;
    width:1px;
    height:1px;
    overflow:hidden;
}

.ace_hidden_token {
    display: none;
}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace_scrollbar.css">.ace_editor>.ace_sb-v div, .ace_editor>.ace_sb-h div{
  position: absolute;
  background: rgba(128, 128, 128, 0.6);
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  border: 1px solid #bbb;
  border-radius: 2px;
  z-index: 8;
}
.ace_editor>.ace_sb-v, .ace_editor>.ace_sb-h {
  position: absolute;
  z-index: 6;
  background: none;
  overflow: hidden!important;
}
.ace_editor>.ace_sb-v {
  z-index: 6;
  right: 0;
  top: 0;
  width: 12px;
}
.ace_editor>.ace_sb-v div {
  z-index: 8;
  right: 0;
  width: 100%;
}
.ace_editor>.ace_sb-h {
  bottom: 0;
  left: 0;
  height: 12px;
}
.ace_editor>.ace_sb-h div {
  bottom: 0;
  height: 100%;
}
.ace_editor>.ace_sb_grabbed {
  z-index: 8;
  background: #000;
}
/*# sourceURL=ace/css/ace_scrollbar.css */</style><style data-emotion="css-global" data-s=""></style><meta name="emotion-insertion-point" content=""><style data-emotion="css" data-s=""></style>
    <link rel="icon" href="https://www.codechef.com/favicon.ico" type="image/x-icon">
    <title> Practice Coding Problem</title>
    
    <meta name="description" content="Learn to code for free using our beginner friendly and interactive learning courses. Get all the practical skills required to excel at computer science. Start learning with CodeChef today and unlock your potential as a developer!">
    <meta name="og:image" content="https://cdn.codechef.com/sites/all/themes/abessive/cc-logo.png">
    <meta name="og:type" content="website">
    <meta name="theme-color" content="#000000">
    <meta name="robots" content="index, follow">
    <link rel="canonical" href="https://www.codechef.com/problems/VACCLOTH">
    <script async="" src="./codechef_contest_files/clarity.js.download"></script><script async="" src="./codechef_contest_files/3wyy3fxv0y"></script><script type="text/javascript" async="" src="./codechef_contest_files/analytics.js.download"></script><script type="text/javascript" async="" src="./codechef_contest_files/js"></script><script async="" src="./codechef_contest_files/gtm.js.download"></script><script src="./codechef_contest_files/client" async=""></script>
    <link rel="preconnect" href="https://fonts.googleapis.com/">
    <link rel="preconnect" href="https://fonts.gstatic.com/" crossorigin="">
    <link rel="prefetch" href="https://cdn.codechef.com/images/cc-logo.svg" as="image" type="image/svg+xml">
    <link href="./codechef_contest_files/css2" rel="stylesheet">

    <!-- Initial loader classes -->
  <style>
    @keyframes spin {
      0% {
        transform: rotate(0deg);
      }
      100% {
        transform: rotate(360deg);
      }
    }

    .loadingIcon {
      border: 0.4em solid rgba(0, 0, 0, 0.0);
      border-top: 0.4em solid #2A67B1;
      border-radius: 50%;
      width: 4em;
      height: 4em;
      animation: spin 1s linear infinite;
      color: #2A67B1;
    }

    .loading {
      width: 100%;
      height: 100vh;
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
      color: rgb(108, 116, 134);
      background: inherit;
      z-index: 100;
      position: absolute;
    }

    .message {
      padding: 16px;
      text-align: center;
      font-family: sans-serif;
    }

    /* Dark Mode styles */
    .loader-icon-dark {
      border-top: 0.4em solid #5780b0;
    }
    .dark {
      background: #1d1e23;
      color: rgb(255 255 255 / 60%);
    }
  </style>
  <script>

    const languageIdeRoutes = [
      'python', 'java', 'cpp', 'c', 'pypy', 'csharp', 'javascript', 'go', 'php', 'kotlin', 'rust', 'r', 'sql', 'html',
      'oracledb', 'react'
    ];

    if (
      (['faq', 'pro', 'contests'].includes(window.location.pathname.split('/').filter(Boolean).pop())) ||
      (['learn', 'games', 'viewsolution',
        'submit', 'practice', 'dashboard', 'getting-started', 'college-program', 'practice-old',
        'roadmap', 'blogs', 'roadmaps', 'blogs', 'skill-tests', 'ide', 'mobile'
      ].includes(window.location.pathname.split('/').filter(Boolean)[0])) ||
      (['submit'].includes(window.location.pathname.split('/').filter(Boolean)[1])) ||
      (['status'].includes(window.location.pathname.split('/').filter(Boolean).slice(-2, -1).pop())) || [
        // Regex to match the practice and contest submit routes
        /^\/(submit\/([A-Z]+[A-Z0-9_]*)+|problems\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/submit\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/problems\/([A-Z]+[A-Z0-9_]*)+)$/
      ].some((regexp) => (regexp.test(window.location.pathname))) ||
      (languageIdeRoutes.some(lang => window.location.pathname.includes(`${lang}-online-compiler`)))
    ) {
      const metaElement = document.createElement('meta');
      metaElement.setAttribute('name', 'viewport');
      metaElement.setAttribute('content', 'width=device-width, initial-scale=1');
      document.head.appendChild(metaElement);
    }

    (function (w, d, s, l, i) {
      w[l] = w[l] || [];
      w[l].push({
        'gtm.start': new Date().getTime(),
        event: 'gtm.js'
      });
      var f = d.getElementsByTagName(s)[0],
        j = d.createElement(s),
        dl = l != 'dataLayer' ? '&l=' + l : '';
      j.async = true;
      j.src =
        'https://www.googletagmanager.com/gtm.js?id=' + i + dl;
      f.parentNode.insertBefore(j, f);
    })(window, document, 'script', 'dataLayer', 'GTM-TV5X2M');
  </script><meta name="viewport" content="width=device-width, initial-scale=1">
  <script type="module" crossorigin="" src="./codechef_contest_files/index-5xUhf4Q7.js.download"></script>
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/__commonjsHelpers__-BosuxZz1.js">
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-mui-DaM5Ll1n.js">
  <link rel="modulepreload" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-sweetalert2-CokzRhbv.js">
  <link rel="stylesheet" crossorigin="" href="./codechef_contest_files/index-JiPqnELE.css">
<style id="googleidentityservice_button_styles">.qJTHM{-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;color:#202124;direction:ltr;-webkit-touch-callout:none;font-family:"Roboto-Regular",arial,sans-serif;-webkit-font-smoothing:antialiased;font-weight:400;margin:0;overflow:hidden;-webkit-text-size-adjust:100%}.ynRLnc{left:-9999px;position:absolute;top:-9999px}.L6cTce{display:none}.bltWBb{overflow-wrap:break-word;word-break:break-word}.hSRGPd{color:#1a73e8;cursor:pointer;font-weight:500;text-decoration:none}.Bz112c-W3lGp{height:16px;width:16px}.Bz112c-E3DyYd{height:20px;width:20px}.Bz112c-r9oPif{height:24px;width:24px}.Bz112c-u2z5K{height:36px;width:36px}.Bz112c-uaxL4e{border-radius:10px}.LgbsSe-Bz112c{display:block}.S9gUrf-YoZ4jf{border:none;margin:0;padding:0}.S9gUrf-YoZ4jf *{border:none;margin:0;padding:0}.fFW7wc-ibnC6b>.aZ2wEe>div{border-color:#4285f4}.P1ekSe-ZMv3u{-webkit-transition:height linear .2s;transition:height linear .2s}.P1ekSe-ZMv3u>div:nth-child(1){background-color:#1a73e8!important;-webkit-transition:width linear .3s;transition:width linear .3s}.P1ekSe-ZMv3u>div:nth-child(2){background-image:-webkit-gradient(linear,left top,right top,from(rgba(255,255,255,.7)),to(rgba(255,255,255,.7))),-webkit-gradient(linear,left top,right top,from(#1a73e8),to(#1a73e8))!important;background-image:-webkit-linear-gradient(left,rgba(255,255,255,.7),rgba(255,255,255,.7)),-webkit-linear-gradient(left,#1a73e8,#1a73e8)!important;background-image:linear-gradient(to right,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(to right,#1a73e8,#1a73e8)!important}.P1ekSe-ZMv3u>div:nth-child(3){background-image:-webkit-gradient(linear,left top,right top,from(rgba(255,255,255,.7)),to(rgba(255,255,255,.7))),-webkit-gradient(linear,left top,right top,from(#1a73e8),to(#1a73e8))!important;background-image:-webkit-linear-gradient(left,rgba(255,255,255,.7),rgba(255,255,255,.7)),-webkit-linear-gradient(left,#1a73e8,#1a73e8)!important;background-image:linear-gradient(to right,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(to right,#1a73e8,#1a73e8)!important}.haAclf{display:inline-block}.nsm7Bb-HzV7m-LgbsSe{border-radius:4px;box-sizing:border-box;-webkit-transition:background-color .218s,border-color .218s;transition:background-color .218s,border-color .218s;-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;-webkit-appearance:none;background-color:#fff;background-image:none;border:1px solid #dadce0;color:#3c4043;cursor:pointer;font-family:"Google Sans",arial,sans-serif;font-size:14px;height:40px;letter-spacing:.25px;outline:none;overflow:hidden;padding:0 12px;position:relative;text-align:center;vertical-align:middle;white-space:nowrap;width:auto}@media screen and (-ms-high-contrast:active){.nsm7Bb-HzV7m-LgbsSe{border:2px solid windowText;color:windowText}}@media screen and (preferes-contrast:more){.nsm7Bb-HzV7m-LgbsSe{color:#000}}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe{font-size:14px;height:32px;letter-spacing:.25px;padding:0 10px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe{font-size:11px;height:20px;letter-spacing:.3px;padding:0 8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe{padding:0;width:40px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe{width:32px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe{width:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK{border-radius:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.pSzOP-SxQuSe{border-radius:16px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.purZT-SxQuSe{border-radius:10px}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc{border:none;color:#fff}.nsm7Bb-HzV7m-LgbsSe.MFS4be-v3pZbf-Ia7Qfc{background-color:#1a73e8}.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{background-color:#202124;color:#e8eaed}@media screen and (prefers-contrast:more){.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{color:#fff}}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:18px;margin-right:8px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:14px;min-width:14px;width:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:10px;min-width:10px;width:10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin-left:8px;margin-right:-4px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:10px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:4px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:3px;border-bottom-left-radius:3px;display:-webkit-box;display:-webkit-flex;display:flex;-webkit-box-pack:center;-webkit-justify-content:center;justify-content:center;-webkit-box-align:center;-webkit-align-items:center;align-items:center;background-color:#fff;height:36px;margin-left:-10px;margin-right:12px;min-width:36px;width:36px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c,.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:28px;margin-left:-8px;margin-right:10px;min-width:28px;width:28px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:16px;margin-left:-6px;margin-right:8px;min-width:16px;width:16px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:3px;margin-left:2px;margin-right:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:8px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-bN97Pc-sM5MNb{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;-webkit-box-align:center;align-items:center;-webkit-flex-direction:row;-webkit-box-orient:horizontal;-webkit-box-direction:normal;flex-direction:row;-webkit-box-pack:justify;-webkit-justify-content:space-between;justify-content:space-between;-webkit-flex-wrap:nowrap;flex-wrap:nowrap;height:100%;position:relative;width:100%}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX{-webkit-box-pack:center;-webkit-justify-content:center;justify-content:center}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:1;-webkit-box-flex:1;flex-grow:1;font-family:"Google Sans",arial,sans-serif;font-weight:500;overflow:hidden;text-overflow:ellipsis;vertical-align:top}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-weight:300}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:0;-webkit-box-flex:0;flex-grow:0}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-MJoBVe{-webkit-transition:background-color .218s;transition:background-color .218s;bottom:0;left:0;position:absolute;right:0;top:0}.nsm7Bb-HzV7m-LgbsSe:hover,.nsm7Bb-HzV7m-LgbsSe:focus{box-shadow:none;border-color:rgb(210,227,252);outline:none}.nsm7Bb-HzV7m-LgbsSe:focus-within{outline:2px solid #00639b;border-color:transparent}.nsm7Bb-HzV7m-LgbsSe:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.08)}.nsm7Bb-HzV7m-LgbsSe:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.1)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.24)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.32)}.nsm7Bb-HzV7m-LgbsSe .n1UuX-DkfjY{border-radius:50%;display:-webkit-box;display:-webkit-flex;display:flex;height:20px;margin-left:-4px;margin-right:8px;min-width:20px;width:20px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-family:"Roboto";font-size:12px;text-align:left}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .ssJRIf,.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .fmcmS{overflow:hidden;text-overflow:ellipsis}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;-webkit-box-align:center;align-items:center;color:#5f6368;fill:#5f6368;font-size:11px;font-weight:400}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#e8eaed;fill:#e8eaed}@media screen and (prefers-contrast:more){.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff,.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#000;fill:#000}}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .Bz112c{height:18px;margin:-3px -3px -3px 2px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:0;border-bottom-left-radius:0;border-top-right-radius:3px;border-bottom-right-radius:3px;margin-left:12px;margin-right:-10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.L5Fo6c-sM5MNb{border:0;display:block;left:0;position:relative;top:0}.L5Fo6c-bF1uUb{border-radius:4px;bottom:0;cursor:pointer;left:0;position:absolute;right:0;top:0}.L5Fo6c-bF1uUb:focus{border:none;outline:none}sentinel{}</style><style data-emotion="css" data-s=""></style><style type="text/css">.alert-box p { font-size: 16px; }</style><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Hints-9CE1k8Xd.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/server.browser-ClHRYBjh.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MarkdownPreviewLite-xn01DJ1n.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index-BaU59JRE.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-react-markdown-oodMiuDP.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-katex-CfUp33UP.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-prismjs-DNZw6GtJ.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/MarkdownPreviewLite-BN6Z5l65.css"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/katex-DSyo5k8n.css"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/prism-vs-dark-B-GUGs9_.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/CodeVisualizer-Dj7auXT_.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/CodeVisualizer-7Anurih9.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/FeatureToolTip-8xkNJYGH.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/FeatureToolTip-VveDvckU.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/LearningContest-B5Qacl_7.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constant-ChAz5tWE.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-ace-CwHVNqeR.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/LearningContest-j7hYIqEq.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Badges-CwIWU8Uk.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/Badges-BtA0P8JH.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constants-Ci9azsM5.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/HorizontalTabPanel-CfDulYqI.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/HorizontalTabPanel-D4piIELt.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/BreadCrumbs-DoKBYZEd.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/BreadCrumbs-9soXbGl9.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/SubmitResult-DE9d0X9z.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index.es-CWU5s4VT.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Constants-CsOP_ErY.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/SubmitResult-Bq1dwiFl.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/InputFields-N3IcMult.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/CheckBox-BOUCm_20.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/CheckBox-sUUsLIgT.css"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/InputFields-pCVQAfih.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/UserStar-CwG8i72_.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/UserStar-DVebVVJp.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/SelectDropdown-CZCudHBo.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/SelectDropdown-DO-u6-Ti.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/FeedbackComponent-DWsKf3oO.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/FeedbackComponent-ClgYIttc.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index-gpiWx7fx.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/vendor-mui-datatables-BHRTrnh-.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MobileHorizontalTab-CYY6NNiD.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/Bookmark-Ap9VH23o.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/Bookmark-CG3kOXzE.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/MySubmissions-B4q-ZgEY.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/TablePagination-vuM0qsvo.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/TablePagination-CLYgiw_w.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/PremiumBanners-D648kgmu.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/PremiumBanners-BbLQiGaF.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/DataGrid-CkfxgKho.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/index.es-CLmToPHp.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/MySubmissions-DN-wAxrh.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/TopBanner.module--qQpYJq9.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/TopBanner-CKeyNyjs.css"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/ProblemSolution-DnDH99Jz.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/VideoPlayer-DFlDTTLD.js"><link rel="modulepreload" as="script" crossorigin="" href="https://www.codechef.com/build/react2/assets/ProblemSolution.module-B8G4Vgx3.js"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/ProblemSolution-Bxg2lSIZ.css"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/ProblemSolution-DNsXnEDg.css"><link rel="stylesheet" crossorigin="" href="./codechef_contest_files/Hints-Drr6uyaC.css"><script type="text/javascript" async="" src="./codechef_contest_files/f.txt"></script><style data-jss="" data-meta="makeStyles">
.jss437 {
  padding: 0;
  min-height: fit-content;
}
.jss437.jss440 {
  min-height: fit-content;
}
.jss438 {
  margin: 0;
}
.jss438.jss440 {
  margin: 0;
}
.jss439 {
  padding: 0;
  margin-right: 0;
}
</style><script src="./codechef_contest_files/mode-plain_text.js.download"></script><script src="./codechef_contest_files/theme-tomorrow_night.js.download"></script><script src="./codechef_contest_files/python.js.download"></script><script src="./codechef_contest_files/mode-python.js.download"></script><script src="./codechef_contest_files/mode-c_cpp.js.download"></script><script src="./codechef_contest_files/c_cpp.js.download"></script></head>

<body style="background: rgb(29, 30, 35);">
  <noscript>You need to enable JavaScript to run this app.</noscript>
  
  <div id="root" class="no-print"><div style="background: rgb(29, 30, 35);"><div aria-hidden="true" class="MuiBackdrop-root _backdrop_pm713_1 undefined css-11m57ox" style="opacity: 0; visibility: hidden;"><span class="MuiLinearProgress-root MuiLinearProgress-colorPrimary MuiLinearProgress-indeterminate _progress_pm713_7 css-1bkwg0l" role="progressbar"><span class="MuiLinearProgress-bar MuiLinearProgress-bar1 MuiLinearProgress-barColorPrimary MuiLinearProgress-bar1Indeterminate css-y6kna5"></span><span class="MuiLinearProgress-bar MuiLinearProgress-bar2 MuiLinearProgress-barColorPrimary MuiLinearProgress-bar2Indeterminate css-mddmmv"></span></span></div><div class="_pageContainer_1se0b_3 _dark_1se0b_9" style="max-width: 100%;"><div style="display: block;"><div class="_problem-submit-page__container_c2pcj_2"><div class="_problemBanner__container_a2x1m_314 _dark_a2x1m_126"><div class="_contestProblemBanner_a2x1m_632"><div class="_contestProblemLeftContainer_a2x1m_651"><a class="_backToPractice__box_a2x1m_663" href="https://www.codechef.com/START232D" aria-label="Back to contest"><div class="_icon__container_a2x1m_362"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _icon_a2x1m_347 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ArrowBackIcon"><path d="M20 11H7.83l5.59-5.59L12 4l-8 8 8 8 1.41-1.41L7.83 13H20z"></path></svg></div></a><div class="_contestProblemTitle_a2x1m_699 _dark_a2x1m_126"><div class="_problem-details__container_a2x1m_383"><div class="_status__box_a2x1m_402 _dark_a2x1m_126"><div class="_status-icon__container_a2x1m_406"><i class="_m-icon__ua_a2x1m_454"></i></div></div></div><span class="_problemType__box_a2x1m_636 _dark_a2x1m_126">Scored</span><div class="_darkModeContainer_2m751_2 _dark_2m751_2" title="Switch to Light Mode" style="margin-left: 0px;"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _sunIcon_2m751_22 _dark_2m751_2 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="WbSunnyIcon"><path d="m6.76 4.84-1.8-1.79-1.41 1.41 1.79 1.79zM4 10.5H1v2h3zm9-9.95h-2V3.5h2zm7.45 3.91-1.41-1.41-1.79 1.79 1.41 1.41zm-3.21 13.7 1.79 1.8 1.41-1.41-1.8-1.79zM20 10.5v2h3v-2zm-8-5c-3.31 0-6 2.69-6 6s2.69 6 6 6 6-2.69 6-6-2.69-6-6-6m-1 16.95h2V19.5h-2zm-7.45-3.91 1.41 1.41 1.79-1.8-1.41-1.41z"></path></svg></div></div></div><div class="_timer__container_a2x1m_563 _dark_a2x1m_126"><div class="_timer__content_a2x1m_563"><div class="_timer__values_a2x1m_568"><div class="_ide__timer_a2x1m_572"><span class="_timer__value_a2x1m_568">01</span><span class="_timer__name_a2x1m_584">Hrs</span></div><div class="_ide__timer_a2x1m_572"><span class="_timer__value_a2x1m_568">42</span><span class="_timer__name_a2x1m_584">Min</span></div></div></div></div></div></div><div class="_submit__container_c2pcj_17 _dark_c2pcj_20"><div class="_split__container_c2pcj_23 _dark_c2pcj_20"><div class="_tabs-wrapper__panel_c2pcj_29" style="width: calc(50% - 5px);"><div class="_tabPanel_15j3k_2 _dark_15j3k_30 MuiBox-root css-0"><div class="MuiPaper-root MuiPaper-elevation MuiPaper-rounded MuiPaper-elevation1 notranslate css-vwhgwc" style="--Paper-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);"><div class="MuiTabs-root _tab__container_c2pcj_60 _dark_c2pcj_20 css-1fa633z"><div class="MuiTabs-scroller MuiTabs-fixed css-2xu61f" style="overflow: hidden; margin-bottom: 0px;"><div role="tablist" class="MuiTabs-list MuiTabs-flexContainer css-17do188"><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary Mui-selected _tab__title_c2pcj_40 _dark_c2pcj_20 css-u9647s" tabindex="0" type="button" role="tab" aria-selected="true" id="vertical-tab-panel-0" aria-controls="vertical-tab-panel-0"><span class="MuiTab-wrapper">Statement</span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary _tab__title_c2pcj_40 _dark_c2pcj_20 css-u9647s" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-1" aria-controls="vertical-tab-panel-1"><span class="MuiTab-wrapper">Submissions</span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary _tab__title_c2pcj_40 _dark_c2pcj_20 css-u9647s" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-2" aria-controls="vertical-tab-panel-2"><span class="MuiTab-wrapper">Clarifications</span></button></div><span class="MuiTabs-indicator css-1bv7ie6" style="left: 0px; width: 160px; background: rgb(90, 134, 220);"></span></div></div></div><div id="vertical-tab-panel-0" aria-labelledby="vertical-tab-panel-0" class="_tab__content_c2pcj_68 _dark_c2pcj_20" style="height: calc(-100px + 100vh);"><button class="MuiButtonBase-root MuiFab-root MuiFab-extended MuiFab-sizeSmall MuiFab-default MuiFab-root MuiFab-extended MuiFab-sizeSmall MuiFab-default _fab__container_18t0v_2 css-1y54gqw" tabindex="0" type="button" style="margin-left: 10px;"><span class="_text_18t0v_16 notranslate">Go to Top</span><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _arrow__up-icon_18t0v_13 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ArrowUpwardIcon"><path d="m4 12 1.41 1.41L11 7.83V20h2V7.83l5.58 5.59L20 12l-8-8z"></path></svg></button><div class="MuiBox-root css-0"><div class="_problemStatement__container_10e0b_2 _dark_10e0b_20 "><div class="" style="display: block;"><div class="_fullscreen__container_10e0b_87 _dark_10e0b_20"><div class="css-1eiukdk _fullscreen-clickable__container_10e0b_131" aria-label="Go Fullscreen"><span class="_icon__box_10e0b_147"><i class="_fullscreen__icon_10e0b_159"></i></span></div></div><hr class="MuiDivider-root MuiDivider-fullWidth _fullscreen__divider_10e0b_188 _dark_10e0b_20 css-9k49o2"></div><div class="_problem-statement__inner__container_10e0b_202" style="display: flex;"><div id="problem-statement" class="_problemBody_bh3c4_71 _dark_bh3c4_66 print "><div class="_problemStatementWrapper_bh3c4_33"><div class="_problemBodyContent_bh3c4_71"><h3 class="notranslate">Vacation Clothes</h3><p>Chef is going on a vacation for <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span> days. Each day, he must wear a fresh set of clothes.</p>
<p>Whenever a set is worn on day <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>d</mi></mrow><annotation encoding="application/x-tex">d</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6944em;"></span><span class="mord mathnormal">d</span></span></span></span></span>, it is sent for cleaning and becomes available again only on day <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>d</mi><mo>+</mo><mn>7</mn></mrow><annotation encoding="application/x-tex">d + 7</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7778em; vertical-align: -0.0833em;"></span><span class="mord mathnormal">d</span><span class="mspace" style="margin-right: 0.2222em;"></span><span class="mbin">+</span><span class="mspace" style="margin-right: 0.2222em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">7</span></span></span></span></span>. A set that returns from cleaning on some day may be worn again that same day.</p>
<p>What is the minimum number of sets of clothes Chef must carry so that he always has something to wear for all <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span> days?</p>
<div class="notranslate">
<h3>Input Format</h3>
<ul>
<li>The first and only line contains a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>.</li>
</ul>
</div><div class="notranslate">
<h3>Output Format</h3>
<p>Output the minimum number of sets of clothes Chef needs to carry.</p>
</div>
<h3 class="notranslate">Constraints</h3>
<div class="_html_code__block_bh3c4_219 notranslate">
<ul>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>10</mn></mrow><annotation encoding="application/x-tex">1 \le N \le 10</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">10</span></span></span></span></span></li>
</ul>
</div>
<h3 class="notranslate">Sample 1:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>3
</pre></div><div class="_values_bh3c4_254"><pre>3
</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p>Chef needs to carry <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span> sets of clothes for each of the <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span> days.</p>
</div>
<h3 class="notranslate">Sample 2:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>10
</pre></div><div class="_values_bh3c4_254"><pre>7
</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p>Chef only needs to carry <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>7</mn></mrow><annotation encoding="application/x-tex">7</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">7</span></span></span></span></span> sets, because he can wear the first set again on day <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>8</mn></mrow><annotation encoding="application/x-tex">8</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">8</span></span></span></span></span>, the second set again on day <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>9</mn></mrow><annotation encoding="application/x-tex">9</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">9</span></span></span></span></span> and the third set again on day <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>10</mn></mrow><annotation encoding="application/x-tex">10</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">10</span></span></span></span></span>.</p>
</div><div></div></div></div></div><div class="_acceptedSubmissionAccuracy__container_10e0b_410 _dark_10e0b_20"><div class="_accepted-submission-accuracy__box_10e0b_420"><div class="_text_image__container_10e0b_428"><img src="./codechef_contest_files/accepted.svg" alt="accepted"><span class="_text_10e0b_428">Accepted</span></div><span class="_points_10e0b_440">1</span></div><div class="_accepted-submission-accuracy__box_10e0b_420"><div class="_text_image__container_10e0b_428"><img src="./codechef_contest_files/total-Submissions.svg" alt="total-Submissions"><span class="_text_10e0b_428">Submissions</span></div><span class="_points_10e0b_440">1</span></div><div class="_accepted-submission-accuracy__box_10e0b_420"><div class="_text_image__container_10e0b_428"><img src="./codechef_contest_files/accuracy.svg" alt="accuracy"><span class="_text_10e0b_428">Accuracy</span></div><span class="_points_10e0b_440">100</span></div></div><div class="_feedback__container_10e0b_460"><div class="_upvoteAnnotationContainer_16rju_1234 _dark_16rju_1146 "><div class="_upvoteMainContainer_16rju_1250"><div class="_upvoteAnnotationHeading_16rju_1261 _dark_16rju_1146">Did you like the problem statement?</div></div><div class="_reportIcons_16rju_1256"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _thumbsUpIcon_16rju_1269 _dark_16rju_1146 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ThumbUpOutlinedIcon"><path d="M9 21h9c.83 0 1.54-.5 1.84-1.22l3.02-7.05c.09-.23.14-.47.14-.73v-2c0-1.1-.9-2-2-2h-6.31l.95-4.57.03-.32c0-.41-.17-.79-.44-1.06L14.17 1 7.58 7.59C7.22 7.95 7 8.45 7 9v10c0 1.1.9 2 2 2M9 9l4.34-4.34L12 10h9v2l-3 7H9zM1 9h4v12H1z"></path></svg><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _thumbsDownIcon_16rju_1277 _dark_16rju_1146 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ThumbDownOutlinedIcon"><path d="M15 3H6c-.83 0-1.54.5-1.84 1.22l-3.02 7.05c-.09.23-.14.47-.14.73v2c0 1.1.9 2 2 2h6.31l-.95 4.57-.03.32c0 .41.17.79.44 1.06L9.83 23l6.59-6.59c.36-.36.58-.86.58-1.41V5c0-1.1-.9-2-2-2m0 12-4.34 4.34L12 14H3v-2l3-7h9zm4-12h4v12h-4z"></path></svg><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _commentIcon_16rju_1285 _dark_16rju_1146 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="CommentIcon"><path d="M21.99 4c0-1.1-.89-2-1.99-2H4c-1.1 0-2 .9-2 2v12c0 1.1.9 2 2 2h14l4 4zM18 14H6v-2h12zm0-3H6V9h12zm0-3H6V6h12z"></path></svg></div></div></div><div class="_moreInfo__container_10e0b_463 _dark_10e0b_20"><div class="_accordion_10e0b_466"><div class="_accordion__summary_10e0b_470">More Info</div><div class="_accordion__details_10e0b_475"><div><span class="_title_10e0b_239">Time limit</span><span class="_value_10e0b_497">1 secs</span></div><div><span class="_title_10e0b_239">Memory limit</span><span class="_value_10e0b_497">1.5 GB</span></div><div><span class="_title_10e0b_239">Source Limit</span><span class="_value_10e0b_497">50000 Bytes</span></div></div></div></div><hr class="MuiDivider-root MuiDivider-fullWidth _horizontal__divider_10e0b_322 _dark_10e0b_20 css-9k49o2"><div class="_contributorsInfo__container_10e0b_467 _dark_10e0b_20"><div class="MuiPaper-root MuiPaper-elevation MuiPaper-elevation1 MuiAccordion-root MuiAccordion-gutters _accordion_10e0b_466 css-1sh2c7f" style="--Paper-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);"><h3 class="MuiAccordion-heading css-wnfue5"><button class="MuiButtonBase-root MuiAccordionSummary-root MuiAccordionSummary-gutters _accordion__summary_10e0b_470 css-ececx" tabindex="0" type="button" aria-expanded="false"><span class="MuiAccordionSummary-content MuiAccordionSummary-contentGutters css-1b8uc0m"><span>Contributors</span></span><span class="MuiAccordionSummary-expandIconWrapper css-f8wb7g"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _expandIcon_10e0b_646 _dark_10e0b_20 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ExpandMoreIcon"><path d="M16.59 8.59 12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span></button></h3><div class="MuiCollapse-root MuiCollapse-vertical MuiCollapse-hidden css-abqyn" style="min-height: 0px;"><div class="MuiCollapse-wrapper MuiCollapse-vertical css-15830to"><div class="MuiCollapse-wrapperInner MuiCollapse-vertical css-9vd5ud"><div role="region" class="MuiAccordion-region"><div class="MuiAccordionDetails-root _accordion__details_10e0b_475 css-l9xe8y"><div><span class="_title_10e0b_239">Author(s)</span><div class="_usernamesContainer_10e0b_492"><a class="_value_10e0b_497 _hoverClass_2pyv4_10" href="https://www.codechef.com/users/raysh07_adm" target="_blank" rel="noopener noreferrer">raysh07_adm</a></div></div><div><span class="_title_10e0b_239">Tester(s)</span><div class="_usernamesContainer_10e0b_492"><a class="_value_10e0b_497 _hoverClass_2pyv4_10" href="https://www.codechef.com/users/sushil2006" target="_blank" rel="noopener noreferrer">sushil2006</a></div></div><div><span class="_title_10e0b_239">Editorialist(s)</span><div class="_usernamesContainer_10e0b_492"><a class="_value_10e0b_497 _hoverClass_2pyv4_10" href="https://www.codechef.com/users/iceknight1093" target="_blank" rel="noopener noreferrer">iceknight1093</a></div></div></div></div></div></div></div></div></div></div></div></div></div><div hidden="" id="vertical-tab-panel-1" aria-labelledby="vertical-tab-panel-1" class="_tab__content_c2pcj_68 _dark_c2pcj_20" style="height: calc(-100px + 100vh);"></div><div hidden="" id="vertical-tab-panel-2" aria-labelledby="vertical-tab-panel-2" class="_tab__content_c2pcj_68 _dark_c2pcj_20" style="height: calc(-100px + 100vh);"></div></div></div><div class="gutter gutter-horizontal" style="width: 10px;"></div><div class="_ideWrapper__panel_c2pcj_83 _dark_c2pcj_20" style="width: calc(50% - 5px);"><div class="_ide_r2w6z_2 _dark_r2w6z_30   notranslate"><div class="_ide__container_r2w6z_6 " style="height: calc(-80px + 100vh);"><div><div class="_ideHeader_1g5qp_14 _dark_1g5qp_55   "><div><div class="MuiFormControl-root css-1qk38wv" style="width: 156px;"><div class="MuiInputBase-root MuiOutlinedInput-root MuiInputBase-colorPrimary Mui-focused MuiInputBase-formControl _language__select_1g5qp_35 _dark_1g5qp_55 MuiSelect-root css-98ra8i"><div tabindex="0" role="combobox" aria-expanded="false" aria-haspopup="listbox" aria-labelledby="language-select" id="language-select" class="MuiSelect-select MuiSelect-outlined MuiInputBase-input MuiOutlinedInput-input css-mp9f0v">C</div><input aria-invalid="false" aria-hidden="true" tabindex="-1" class="MuiSelect-nativeInput css-147e5lo" value="C"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium MuiSelect-icon MuiSelect-iconOutlined css-1l3b12y" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ArrowDropDownIcon"><path d="M7 10l5 5 5-5z"></path></svg><fieldset aria-hidden="true" class="MuiOutlinedInput-notchedOutline css-5v2ak0"><legend class="css-w4cd9x"><span class="notranslate" aria-hidden="true">​</span></legend></fieldset></div></div></div><ul class="_settings_1fs8l_2 _dark_1fs8l_71"><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Format code"><i class="_beautify__icon_1fs8l_29"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Download code"><i class="_download__icon_1fs8l_35"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Reset code"><i class="_reset__icon_1fs8l_41"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Settings"><i class="_settings__icon_1fs8l_53"></i></div></li><li><div class="css-1eiukdk _icon__container_1fs8l_16" aria-label="Go fullscreen"><i class="_fullscreen__icon_1fs8l_59 _dark_1fs8l_71"></i></div></li></ul></div><div class="_ideEditorWrapper_1g5qp_175 _dark_1g5qp_55  " style="height: calc(-290px + 100vh);"><div aria-hidden="true" class="MuiBackdrop-root _ide-overlay__backdrop_1g5qp_190 css-11m57ox" style="opacity: 0; transition: opacity 195ms cubic-bezier(0.4, 0, 0.2, 1); visibility: hidden;"></div><div id="submit-ide-v2" class=" ace_editor _ide__editor_1g5qp_218 ace-tomorrow-night ace_dark ace_focus" style="width: 500px; height: 100%; font-size: 14px;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" aria-haspopup="false" aria-autocomplete="both" role="textbox" aria-label="Cursor at row 13" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 237px; left: 52px;"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 49px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 16px; left: 0px; width: 49px;"><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 0px;">1<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 17px;">2<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 34px;">3<span class="ace_fold-widget ace_start ace_open" role="button" tabindex="-1" aria-label="Toggle code folding, rows 3 through 11" aria-expanded="true" title="Fold code" style="height: 17px; display: inline-block;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 51px;">4<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 68px;">5<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 85px;">6<span tabindex="-1" style="display: inline-block; height: 17px;" class="ace_fold-widget ace_start ace_open" role="button" aria-label="Toggle code folding, rows 6 through 7" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 102px;">7<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 17px; top: 119px;">8<span tabindex="-1" style="display: inline-block; height: 17px;" class="ace_fold-widget ace_start ace_open" role="button" aria-label="Toggle code folding, rows 8 through 10" aria-expanded="true" title="Fold code"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 136px;">9<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 153px;">10<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 170px;">11<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 187px;">12<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-active-line ace_gutter-cell " aria-hidden="true" style="height: 17px; top: 204px;">13<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div></div></div><div class="ace_scroller " style="line-height: 17px; left: 48.3945px; right: 0px; bottom: 0px;"><div class="ace_content" style="top: 16px; left: 0px; width: 698.605px; height: 375px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 620px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 17px; top: 204px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line_group" style="height: 17px; top: 0px;"><div class="ace_line" style="height: 17px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;stdio.h&gt;</span></div></div><div class="ace_line_group" style="height: 17px; top: 17px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 34px;"><div class="ace_line" style="height: 17px;"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 51px;"><div class="ace_line" style="height: 17px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">n</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 68px;"><div class="ace_line" style="height: 17px;">    <span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">n</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 85px;"><div class="ace_line" style="height: 17px;">    <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">n</span><span class="ace_keyword ace_operator">&lt;=</span><span class="ace_constant ace_numeric">7</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 102px;"><div class="ace_line" style="height: 17px;">        <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">n</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 119px;"><div class="ace_line" style="height: 17px;">    <span class="ace_paren ace_rparen">}</span> <span class="ace_keyword ace_control">else</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 17px; top: 136px;"><div class="ace_line" style="height: 17px;">        <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">7</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 17px; top: 153px;"><div class="ace_line" style="height: 17px;">    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 170px;"><div class="ace_line" style="height: 17px;"><span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 17px; top: 187px;"><div class="ace_line" style="height: 17px;"></div></div><div class="ace_line_group" style="height: 17px; top: 204px;"><div class="ace_line" style="height: 17px;"></div></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_animate-blinking"><div class="ace_cursor" style="display: block; top: 204px; left: 4px; width: 8px; height: 17px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 22px; height: 341px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 253px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 48.3945px; right: 0px; width: 698.605px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 706px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; font-language-override: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div><div class="ace_tooltip" role="tooltip" style="display: none; pointer-events: auto;"></div></div></div></div><div class="_ide-execute__wrapper_r2w6z_20 "><div class="_ideExecuteWrapperRef_yibw2_2 _dark_yibw2_12 "><div class="_ideExecuteWrapperComponents_yibw2_15  "><div class="_testcaseContainer_yibw2_411 _dark_yibw2_12"><div class="MuiPaper-root MuiPaper-elevation MuiPaper-elevation1 MuiAccordion-root Mui-expanded MuiAccordion-gutters _accordion_yibw2_414 css-1sh2c7f" style="--Paper-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);"><h3 class="MuiAccordion-heading css-wnfue5"><button class="MuiButtonBase-root MuiAccordionSummary-root jss437 Mui-expanded jss440 MuiAccordionSummary-gutters _accordion__summary_yibw2_419 css-3pzm2w" tabindex="0" type="button" aria-expanded="true"><span class="MuiAccordionSummary-content jss438 Mui-expanded jss440 MuiAccordionSummary-contentGutters css-1b8uc0m"><span>Test against Custom Input</span></span><span class="MuiAccordionSummary-expandIconWrapper Mui-expanded jss440 css-f8wb7g"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _expandMoreIcon_yibw2_737 _dark_yibw2_12 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ExpandMoreIcon"><path d="M16.59 8.59 12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span></button></h3><div class="MuiCollapse-root MuiCollapse-vertical MuiCollapse-entered css-1cbf1l2" style="min-height: 0px;"><div class="MuiCollapse-wrapper MuiCollapse-vertical css-15830to"><div class="MuiCollapse-wrapperInner MuiCollapse-vertical css-9vd5ud"><div role="region" class="MuiAccordion-region"><div class="MuiAccordionDetails-root _accordion__details_yibw2_425 css-l9xe8y"><textarea placeholder="Your program will run with no input" class="_textarea_yibw2_430" style="margin: 10px 0px; resize: none; height: 100px; background: rgb(255, 255, 255); border: 1px solid rgb(232, 236, 244); border-radius: 4px;">3
</textarea></div></div></div></div></div></div></div><div></div><div class="_runTab_yibw2_566 _dark_yibw2_12"><div><div class="_run-result_1xnpw_2"><div class="_run__container_1xnpw_42 _dark_1xnpw_34 _status-success_1xnpw_254"><div class="_status__container_1xnpw_48"><div class="_status__container_inner_1xnpw_58"><i class="_status__icon_1xnpw_67"></i></div><span>Correct Answer</span></div><div></div><div class="_submission__container_1xnpw_73"><span>Submission ID: </span><a class="_submission__anchor_1xnpw_78 _hoverClass_2pyv4_10" href="https://www.codechef.com/viewsolution/1255459012" target="_blank" rel="noopener noreferrer">1255459012</a></div></div><div class="_scoreTimeMem__container_1xnpw_344 _dark_1xnpw_34"></div><div class="_subtask__result_1xnpw_398 _dark_1xnpw_34"><div><table class="status-table" cellspacing="0" cellpadding="5" width="60%">
    <tbody><tr>
        <th>Sub-Task</th>
        <th>Task #</th>
        <th>Result<br>(time)</th>
    </tr><tr class="correct"><td>1</td><td>0</td><td>Correct<br>(0.00)</td></tr><tr class="correct"><td>1</td><td>1</td><td>Correct<br>(0.00)</td></tr><tr class="correct"><td>1</td><td>2</td><td>Correct<br>(0.00)</td></tr><tr class="correct"><td>1</td><td>3</td><td>Correct<br>(0.00)</td></tr><tr class="subtask-result">
                <td colspan="2" align="right" style="padding-right: 8%"><strong>Subtask Score: 100%</strong>
                </td><td><strong>Result - </strong> Correct</td></tr><tr>
            <th></th>
            <th></th>
            <th>Total Score = 100%<br></th>
        </tr>
    </tbody></table></div></div></div></div></div></div><div class="_runContainer_yibw2_125 _dark_yibw2_12  "><div class="_leftContainer_yibw2_155"></div><div class="_execute-btn-container_yibw2_215"><div class="_execute-btn-actions_yibw2_238"><button type="button" class="css-1eiukdk _compile__btn_yibw2_294" id="compile_btn"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _btn__icon_yibw2_312 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="ArrowRightIcon"><path d="m10 17 5-5-5-5z"></path></svg><span class="_btn__text_yibw2_317">Run</span></button><button type="button" id="submit_btn" class="css-1eiukdk _submit__btn_yibw2_333 _dark_yibw2_12">Submit</button></div></div></div><div></div></div></div></div></div></div></div></div></div></div></div></div></div>
  <script>
    // Payment Scripts
    if (['pro', 'getting-started', 'dashboard', 'roadmap'].includes(window.location.pathname.split('/')[1])) {
      const razorPay = document.createElement('script');
      razorPay.setAttribute('src', 'https://checkout.razorpay.com/v1/checkout.js');
      document.head.appendChild(razorPay);

      // const instamojo = document.createElement('script');
      // instamojo.setAttribute('src', 'https://js.instamojo.com/v1/checkout.js');
      // document.head.appendChild(instamojo);

    }
    const scriptElement = document.createElement('script');
    scriptElement.setAttribute('src',
            "/sites/all/modules/codechef_alerts/codechef_alerts.js?v=649c43b6894169b33b5557aa0374459d"
    );
    scriptElement.setAttribute('async', '');
    document.body.appendChild(scriptElement);
  </script><script src="./codechef_contest_files/codechef_alerts.js.download" async=""></script>
  <script type="text/javascript" async="" src="./codechef_contest_files/cookies.js.download"></script>
  <script>
    const loadingMessages = [
      'Transform every day with the habit of learning',
      'Explored our courses yet? Enroll now! Over 500k learners have already enrolled.',
      'Pro tip: Facing a challenge while solving problem? Tap into AI Help',
      'Set the pace, set the goal, Maintain your streak by solving problem everyday',
      'Set your own goal to finish each modules',
      'Pro tip: Pseudo code first, then code with ease.',
      'Coding is not difficult, you need to try hard enough',
      '1% better everyday can lead to big results.',
      'Hard work and consistency is the only way to success',
      'Don\'t stop until you are in the top 1%',
      'Becoming the best coder is easy! Just keep doing CodeChef.',
      'Compete in the XP Weekly Leaderboard and see where you rank!',
    ];
    const randomIndex = Math.floor(Math.random() * loadingMessages.length);
    document.getElementById('initialLoadingMessage').innerText = loadingMessages[randomIndex];
  </script>



<script>
    window.CDN_URL = 'https://cdn.codechef.com';
    window.csrfToken = "27661cc16b009381479181dbad060e128f2e6512905d796e43db697ad2a40dcb";
    window.APPS_URL = 'https://www.codechef-apps.com';
    window.DISCUSS_URL = 'https://discuss.codechef.com';
    window.tawkPropertyId = '668d037a7a36f5aaec9634a5';
    window.widgetId = '1i2bdb6dt';
    try {
        window.codeChefUserData = {"status":"success","user":{"username":"rahim1512","uid":"6134540","email":"kahmedrahim1512@gmail.com","profileImage":null,"profileImagePath":"https:\/\/cdn.codechef.com\/sites\/all\/themes\/abessive\/images\/user_default_thumb.jpg","oauth_buttons":null,"oauthData":null,"html_handle":"rahim1512","userRatingStar":0,"userRatingStarColor":"black","isAdmin":false,"isHYCAdmin":false,"hasAnySpecialPermission":false,"isPremiumUser":false,"isVerifiedUser":true,"user_consented_privacy_policy_version":null,"user_consented_privacy_policy_on":null,"current_privacy_policy_version":null,"visitedContests":[],"rating":0,"userStarHtml":"","proDiscount":null,"theme":"dark","fullName":"K Ahmed Rahim","pro_plan":null,"sale":{"saleEndDateIST":"2026-04-02T05:59:59","saleTitle":"FLASH SALE","saleDescription":"CODECHEF FLASH SALE IS ACTIVE","isSaleOngoing":true,"saleDaysLeft":1,"saleEndDateUTC":"2026-04-02T00:29:59"},"isUserPartOfAnyUserGroup":false,"userSelectedProgrammingLanguage":"PYTH 3","country":"Bangladesh","isNumberVerified":false,"isJobProfileComplete":false,"league":0,"credits":2,"aiChatLanguage":"English"},"time":1775053855,"ip":"103.137.160.112","adStrip":null};
    } catch (e) {
        window.codeChefUserData = {};
    }
    try {
        window.userMessages = {"status":"success","messages":null};
    } catch (e) {
        window.userMessages = {};
    }
</script>
<script type="text/javascript" id="" charset="">(function(a,e,b,f,g,c,d){a[b]=a[b]||function(){(a[b].q=a[b].q||[]).push(arguments)};c=e.createElement(f);c.async=1;c.src="https://www.clarity.ms/tag/"+g;d=e.getElementsByTagName(f)[0];d.parentNode.insertBefore(c,d)})(window,document,"clarity","script","3wyy3fxv0y");</script><div style="top: 0px; left: 0px; position: fixed; display: none; place-items: center; height: 100vh; width: 100vw; z-index: 10000; line-height: 1.5; font-size: 16px; backdrop-filter: blur(2px); background: rgba(0, 0, 0, 0.1); box-sizing: border-box;"></div><div class=" ace_editor ace_autocomplete ace_dark ace-tomorrow-night" style="font-size: 14px; top: 271.285px; left: 943.248px; height: 160px; display: none;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" aria-haspopup="false" aria-autocomplete="both" role="textbox" aria-label="Cursor at row 1" aria-hidden="true" style="opacity: 0; font-size: 1px; top: 0px; left: -100px;"></textarea><div class="ace_gutter" aria-hidden="true" style="display: none; left: 0px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px;"></div></div><div class="ace_scroller " style="line-height: 20px; left: 0px; right: 17px; bottom: 0px;"><div class="ace_content" style="cursor: default; top: 0px; left: 0px; width: 281px; height: 200px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 620px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 20px; top: 0px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" role="listbox" aria-roledescription="Autocomplete suggestions" aria-label="Autocomplete suggestions" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;" aria-activedescendant="suggest-aria-id:0"><div class="ace_line ace_selected" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="1" aria-label="decltype, keyword" id="suggest-aria-id:0" aria-selected="true" style="height: 20px; top: 0px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">ecltype</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="2" aria-label="default, keyword" style="height: 20px; top: 20px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">efault</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="3" aria-label="delete, keyword" style="height: 20px; top: 40px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">elete</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="4" aria-label="deque, snippet" style="height: 20px; top: 60px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">eque</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">snippet</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="5" aria-label="do, keyword" style="height: 20px; top: 80px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">o</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="6" aria-label="double, keyword" style="height: 20px; top: 100px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">ouble</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="7" aria-label="dynamic_cast, keyword" style="height: 20px; top: 120px;"><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">ynamic_cast</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="8" aria-label="stdio, local" style="height: 20px; top: 140px;"><span class="ace_">st</span><span class="ace_completion-highlight" role="mark">d</span><span class="ace_">io</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">local</span></div><div class="ace_line" role="option" aria-roledescription="item" aria-setsize="29" aria-describedby="doc-tooltip" aria-posinset="9" aria-label="ld, snippet" style="height: 20px; top: 160px;"><span class="ace_">l</span><span class="ace_completion-highlight" role="mark">d</span><span class="ace_completion-spacer"> </span><span class="ace_completion-meta">snippet</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style="opacity: 0;"><div class="ace_cursor" style="display: block; top: 0px; left: 4px; width: 8px; height: 20px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 22px; height: 160px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 580px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 0px; right: 17px; width: 281px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 281px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; font-language-override: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div><div class="ace_tooltip" role="tooltip" style="display: none; pointer-events: auto;"></div></div></body><wps-translate-entry><template shadowrootmode="open"><style>*,*:before,*:after{box-sizing:border-box;padding:0;margin:0}html,body,.root{width:100%;height:100%}button,input,select,textarea{font-family:inherit}::-webkit-scrollbar{width:8px}::-webkit-scrollbar-thumb{background-color:#afafaf;border-radius:12px}.common-input{border-radius:48px;background-color:#f7f7f7;border:1px solid rgb(224,224,224);box-shadow:none}.common-input:hover{border-color:#a7a7a7;background-color:#f7f7f7}.common-input.active,.common-input:focus{background-color:#eff3ff;border-color:#2962ff}.common-tips{position:absolute;z-index:2147483647;-webkit-user-select:none;user-select:none;color:#fff;font-size:12px;line-height:16px;border-radius:8px;font-weight:400;padding:8px 12px;background-color:#000;border:1px solid rgb(54,54,54);box-shadow:0 12px 32px #00000014}.common-button-gradient{height:36px;padding:0 16px;font-size:14px;color:#fff;cursor:pointer;border-radius:12px;display:flex;align-items:center;justify-content:center;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;background:radial-gradient(75.94% 100% at 52.67% 100%,#77dbff,#4476ff);border:none;transition:all .3s ease}.common-button-gradient:hover,.common-button-gradient:active,.common-button-gradient.active{color:#fff;border:none}.common-button-gradient:hover{background:radial-gradient(75.94% 100% at 52.67% 100%,#77dbff,#628cff)}.common-button-gradient:active,.common-button-gradient.active{background:radial-gradient(75.94% 100% at 52.67% 100%,#24c4ff,#2a63ff)}.common-button-gradient[disabled],.common-button-gradient.disabled{opacity:.4}.common-button-gradient:focus-visible{outline:none}.skeleton-item{border-radius:4px;animation:skeleton-loading 1.5s infinite}[dir=ltr] .skeleton-item{background:linear-gradient(90deg,#f0f0f0 25%,#e0e0e0,#f0f0f0 75%)}[dir=rtl] .skeleton-item{background:linear-gradient(-90deg,#f0f0f0 25%,#e0e0e0,#f0f0f0 75%)}[dir] .skeleton-item{background-size:200% 100%}.flex-jc-sb{display:flex;align-items:center;justify-content:space-between}@keyframes skeleton-loading{to{background-position:-200% 0}}@keyframes rotate{to{transform:rotate(360deg)}}.fade-in-enter-active{transition:opacity .3s ease}.fade-in-enter-from{opacity:0}.slow-fade-in-enter-active{transition:opacity 1s ease}.slow-fade-in-enter-from{opacity:0}[dir=rtl] .rtl-rotate-icon{rotate:180deg}.icon[data-v-b348f0a6]{display:inline-block;flex-shrink:0;width:20px;height:20px;background-repeat:no-repeat;background-position:center center;background-size:contain}.icon .svg[data-v-b348f0a6]{width:100%;height:100%}.icon.svg-icon[data-v-b348f0a6]{background:none}.base-button[data-v-470f436e]{-webkit-user-select:none;user-select:none;display:flex;align-items:center;justify-content:center;height:36px;padding:0 16px;font-size:14px;text-align:center;cursor:pointer;border-radius:8px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.base-button.block[data-v-470f436e]{display:block;width:100%;margin:0;padding:0}.base-button.big[data-v-470f436e]{height:48px;font-size:16px;border-radius:12px}.base-button-default[data-v-470f436e]{outline:none;color:#000;background-color:#fff;border:1px solid rgb(224,224,224)}.base-button-default[data-v-470f436e]:hover{background:#f7f7f7;border:1px solid rgb(167,167,167)}.base-button-default[data-v-470f436e]:active,.base-button-default.active[data-v-470f436e]{background:#e0e0e0;border:1px solid rgb(167,167,167)}.base-button-default[disabled][data-v-470f436e],.base-button-default.disabled[data-v-470f436e]{outline:none;opacity:.4;cursor:auto}.base-button-default[disabled][data-v-470f436e]:hover,.base-button-default[disabled][data-v-470f436e]:active,.base-button-default[disabled].active[data-v-470f436e],.base-button-default.disabled[data-v-470f436e]:hover,.base-button-default.disabled[data-v-470f436e]:active,.base-button-default.disabled.active[data-v-470f436e]{background-color:#fff}.base-button-default[data-v-470f436e]:focus-visible{outline:none}.base-button-primary[data-v-470f436e]{color:#fff;background-color:#2962ff;border:none}.base-button-primary[data-v-470f436e]:hover,.base-button-primary[data-v-470f436e]:active,.base-button-primary.active[data-v-470f436e]{border:none}.base-button-primary[data-v-470f436e]:hover{opacity:.8}.base-button-primary[data-v-470f436e]:active,.base-button-primary.active[data-v-470f436e]{background-color:#1c4eda;opacity:1}.base-button-primary[disabled][data-v-470f436e],.base-button-primary.disabled[data-v-470f436e]{opacity:.4;cursor:auto}.base-button-primary[disabled][data-v-470f436e]:active,.base-button-primary[disabled].active[data-v-470f436e],.base-button-primary.disabled[data-v-470f436e]:active,.base-button-primary.disabled.active[data-v-470f436e]{background-color:#2962ff}.base-button-primary[data-v-470f436e]:focus-visible{outline:none}.base-button-text[data-v-470f436e]{color:#2962ff;background-color:transparent;border:none;padding:4px;border-radius:8px}.base-button-text[data-v-470f436e]:hover{background:#f7f7f7}.base-button-text[data-v-470f436e]:active,.base-button-text.active[data-v-470f436e]{background:#efefef}.base-button-text[disabled][data-v-470f436e],.base-button-text.disabled[data-v-470f436e]{opacity:.4;cursor:auto}.base-button-text[disabled][data-v-470f436e]:active,.base-button-text[disabled].active[data-v-470f436e],.base-button-text.disabled[data-v-470f436e]:active,.base-button-text.disabled.active[data-v-470f436e]{background-color:transparent}.icon-button[data-v-4b3aafaf]{display:inline-block;flex-shrink:0;padding:4px;border-radius:4px;cursor:pointer}.icon-button[data-v-4b3aafaf]:hover{background:#f0f0f0}.icon-button.active[data-v-4b3aafaf],.icon-button[data-v-4b3aafaf]:active,.icon-button[data-v-4b3aafaf]:focus{background:#e0e0e0}.icon-button.active[data-v-4b3aafaf]:hover{background:#e0e0e0}.icon-button.disabled[data-v-4b3aafaf]{opacity:.5;cursor:default;pointer-events:none}.popup-container[data-v-ef2175fa]{position:absolute;z-index:1;border-radius:8px;background-color:#fff;border:1px solid rgb(224,224,224);box-shadow:0 12px 32px #00000029}.base-select[data-v-502e0441]{position:relative;color:#000}.base-select .select-input[data-v-502e0441]{height:40px;position:relative;display:flex;gap:12px;align-items:center;justify-content:space-between;cursor:pointer;background-color:#f7f7f7;border:1px solid rgb(224,224,224);border-radius:48px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}[dir=ltr] .base-select .select-input[data-v-502e0441]{padding:0 16px 0 4px}[dir=rtl] .base-select .select-input[data-v-502e0441]{padding:0 4px 0 16px}.base-select .select-input.small[data-v-502e0441]{width:267px;height:46px;padding:0 18px;font-size:14px}.base-select .select-input[data-v-502e0441]:hover{border-color:#a7a7a7}.base-select .select-input[data-v-502e0441]:active,.base-select .select-input.active[data-v-502e0441]{background-color:#eff3ff;border-color:#2962ff}.base-select .select-input[disabled][data-v-502e0441],.base-select .select-input.disabled[data-v-502e0441]{outline:none;opacity:.4}.base-select .select-input[disabled][data-v-502e0441]:hover,.base-select .select-input[disabled][data-v-502e0441]:active,.base-select .select-input.disabled[data-v-502e0441]:hover,.base-select .select-input.disabled[data-v-502e0441]:active{background-color:transparent}.base-select .select-input .select-text[data-v-502e0441]{flex:1;font-weight:500;font-size:14px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}[dir=ltr] .base-select .select-input.active .select-arrow[data-v-502e0441]{transform:rotate(180deg)}[dir=rtl] .base-select .select-input.active .select-arrow[data-v-502e0441]{transform:rotate(-180deg)}.base-select .select-input .select-arrow[data-v-502e0441]{transition:transform .2s ease-in-out}.base-select .select-input .select-label[data-v-502e0441]{display:inline-block;flex:1;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.base-select .select-input .select-label .select-subtext[data-v-502e0441]{opacity:.6}.base-select .select-input .select-placeholder[data-v-502e0441]{color:#b1b1b1}.base-select .select-options[data-v-502e0441]{display:flex;flex-direction:column;height:476px;padding:24px 0;overflow:auto;border-radius:24px}.base-select .select-options .option-list[data-v-502e0441]{display:grid;grid-template-columns:repeat(3,1fr);overflow:hidden auto}.base-select .select-options .option-list .option[data-v-502e0441]{position:relative;display:flex;align-items:center;width:198px;height:48px;padding-inline:54px 6px;cursor:pointer;border-radius:12px}.base-select .select-options .option-list .option.empty[data-v-502e0441]{visibility:hidden}.base-select .select-options .option-list .option .option-text[data-v-502e0441]{overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.base-select .select-options .option-list .option .selected-icon[data-v-502e0441]{position:absolute;inset-inline-start:30px;color:#2962ff}.base-select .select-options .option-list .option[data-v-502e0441]:hover{background-color:#f0f0f0}.base-select .select-options .option-list .option.selected .option-text[data-v-502e0441]{font-weight:500;color:#2962ff}.base-select .select-options.single-column[data-v-502e0441]{width:fit-content;padding:8px}.common-switch[data-v-b6743f25]{position:relative;display:inline-block;width:28px;height:16px;vertical-align:middle;cursor:pointer;background-color:#f7f7f7;border:1px solid rgb(224,224,224);border-radius:48px;transition:background-color .2s}.common-switch.switch-on[data-v-b6743f25]{background-color:#fff}.common-switch .switch-ball[data-v-b6743f25]{position:absolute;top:2px;display:inline-block;width:10px;height:10px;background-color:#949494;border-radius:50%;transition:all .1s}[dir=ltr] .common-switch .switch-ball[data-v-b6743f25]{left:2px}[dir=rtl] .common-switch .switch-ball[data-v-b6743f25]{right:2px}.switch-on .switch-ball[data-v-b6743f25]{background-color:#2962ff}[dir=ltr] .switch-on .switch-ball[data-v-b6743f25]{left:14px}[dir=rtl] .switch-on .switch-ball[data-v-b6743f25]{right:14px}.colorful-tip-wrapper[data-v-e464467d]{position:relative;border-radius:8px;box-shadow:0 12px 32px #0d0d0d14}.colorful-tip-wrapper .colorful-tip-bg[data-v-e464467d]{position:absolute;z-index:0;top:0;bottom:0;border-radius:inherit}[dir=ltr] .colorful-tip-wrapper .colorful-tip-bg[data-v-e464467d]{left:0;right:0;background:linear-gradient(90deg,#47c8ff,#2962ff)}[dir=rtl] .colorful-tip-wrapper .colorful-tip-bg[data-v-e464467d]{right:0;left:0;background:linear-gradient(-90deg,#47c8ff,#2962ff)}.colorful-tip-wrapper .colorful-tip[data-v-e464467d]{position:relative;font-size:12px;line-height:1.5;border-radius:inherit;border:1px solid transparent;background-color:#fff;background-clip:padding-box}[dir=ltr] .colorful-tip-wrapper .colorful-tip[data-v-e464467d]{padding:12px 34px 12px 16px}[dir=rtl] .colorful-tip-wrapper .colorful-tip[data-v-e464467d]{padding:12px 16px 12px 34px}.colorful-tip-wrapper .colorful-tip.no-close[data-v-e464467d]{padding:12px 16px}.colorful-tip-wrapper .colorful-tip .tip-content[data-v-e464467d]{color:#333}.colorful-tip-wrapper .colorful-tip .arrow[data-v-e464467d]{position:absolute;width:0;height:0}.colorful-tip-wrapper .colorful-tip .arrow[data-v-e464467d]:after{content:"";position:absolute;width:0;height:0}.colorful-tip-wrapper .colorful-tip .arrow.arrow-bottom[data-v-e464467d]{bottom:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-top:5px solid #4a9eff}.colorful-tip-wrapper .colorful-tip .arrow.arrow-bottom[data-v-e464467d]:after{top:-6px;border-left:5px solid transparent;border-right:5px solid transparent;border-top:4px solid white}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-bottom[data-v-e464467d]:after{left:-5px}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-bottom[data-v-e464467d]:after{right:-5px}.colorful-tip-wrapper .colorful-tip .arrow.arrow-top[data-v-e464467d]{top:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-bottom:5px solid #4a9eff}.colorful-tip-wrapper .colorful-tip .arrow.arrow-top[data-v-e464467d]:after{bottom:-6px;border-left:5px solid transparent;border-right:5px solid transparent;border-bottom:4px solid white}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-top[data-v-e464467d]:after{left:-5px}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-top[data-v-e464467d]:after{right:-5px}.colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]{border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]{right:-5px;border-left:5px solid #4a9eff}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]{left:-5px;border-right:5px solid #4a9eff}.colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]:after{top:-5px;border-top:5px solid transparent;border-bottom:5px solid transparent}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]:after{left:-6px;border-left:4px solid white}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-right[data-v-e464467d]:after{right:-6px;border-right:4px solid white}.colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]{border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]{left:-5px;border-right:5px solid #4a9eff}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]{right:-5px;border-left:5px solid #4a9eff}.colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]:after{top:-5px;border-top:5px solid transparent;border-bottom:5px solid transparent}[dir=ltr] .colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]:after{right:-6px;border-right:4px solid white}[dir=rtl] .colorful-tip-wrapper .colorful-tip .arrow.arrow-left[data-v-e464467d]:after{left:-6px;border-left:4px solid white}.colorful-tip-wrapper .colorful-tip .icon-close[data-v-e464467d]{position:absolute;top:6px;cursor:pointer}[dir=ltr] .colorful-tip-wrapper .colorful-tip .icon-close[data-v-e464467d]{right:6px}[dir=rtl] .colorful-tip-wrapper .colorful-tip .icon-close[data-v-e464467d]{left:6px}.tip-text[data-v-4ca2dae7]{color:#333}.upgrade-btn[data-v-4ca2dae7]{border-bottom:1px solid rgb(41,98,255);color:#2962ff;font-weight:600;font-size:12px;cursor:pointer}.upgrade-btn[data-v-4ca2dae7]:hover{opacity:.8}.upgrade-btn[data-v-4ca2dae7]:active,.upgrade-btn.active[data-v-4ca2dae7]{color:#1c4eda;opacity:1}.base-radio[data-v-8c1f8e3c]{display:flex;-webkit-user-select:none;user-select:none;align-items:center}.base-radio .radio-container[data-v-8c1f8e3c]{cursor:pointer;display:flex;align-items:center;gap:8px}.base-radio .radio-container .radio[data-v-8c1f8e3c]{width:16px;height:16px;background-color:#f7f7f7;border:1px solid #E0E0E0;border-radius:50%}.base-radio .radio-container .radio.checked[data-v-8c1f8e3c]{background-color:#fff;border:1px solid #2962FF}.base-radio .radio-container .radio.checked[data-v-8c1f8e3c]:after{display:block;width:10px;height:10px;margin:2px;content:"";background-color:#2962ff;border-radius:50%}.base-radio .radio-container .label[data-v-8c1f8e3c]{cursor:pointer;flex:1}.language-same-tip-wrapper[data-v-df35f72e]{position:relative}.language-same-tip[data-v-df35f72e]{position:relative;border-radius:6px;background:#353b39;color:#fff;font-size:12px;line-height:1.5}[dir=ltr] .language-same-tip[data-v-df35f72e]{padding:10px 32px 10px 16px}[dir=rtl] .language-same-tip[data-v-df35f72e]{padding:10px 16px 10px 32px}.language-same-tip .tip-content[data-v-df35f72e]{white-space:normal;word-break:break-word}.language-same-tip .tip-content .switch-language[data-v-df35f72e]{cursor:pointer;text-decoration:underline}.language-same-tip .icon-close[data-v-df35f72e]{position:absolute;top:8px;line-height:0;cursor:pointer}[dir=ltr] .language-same-tip .icon-close[data-v-df35f72e]{right:8px}[dir=rtl] .language-same-tip .icon-close[data-v-df35f72e]{left:8px}.language-same-tip .icon-close[data-v-df35f72e] .icon .svg path{stroke:#fff9!important}.language-same-tip .icon-close[data-v-df35f72e] .icon-button:hover,.language-same-tip .icon-close[data-v-df35f72e] .icon-button:active,.language-same-tip .icon-close[data-v-df35f72e] .icon-button.active,.language-same-tip .icon-close[data-v-df35f72e] .icon-button:focus{background:transparent!important}.language-same-tip .arrow[data-v-df35f72e]{position:absolute;width:0;height:0}.language-same-tip .arrow.arrow-right[data-v-df35f72e]{top:50%;transform:translateY(-50%);border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .language-same-tip .arrow.arrow-right[data-v-df35f72e]{right:-5px;border-left:5px solid rgb(53,59,57)}[dir=rtl] .language-same-tip .arrow.arrow-right[data-v-df35f72e]{left:-5px;border-right:5px solid rgb(53,59,57)}.language-same-tip .arrow.arrow-left[data-v-df35f72e]{top:50%;transform:translateY(-50%);border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .language-same-tip .arrow.arrow-left[data-v-df35f72e]{left:-5px;border-right:5px solid rgb(53,59,57)}[dir=rtl] .language-same-tip .arrow.arrow-left[data-v-df35f72e]{right:-5px;border-left:5px solid rgb(53,59,57)}.language-same-tip .arrow.arrow-top[data-v-df35f72e]{top:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-bottom:5px solid rgb(53,59,57)}[dir=ltr] .language-same-tip .arrow.arrow-top[data-v-df35f72e]{left:50%;transform:translate(-50%)}[dir=rtl] .language-same-tip .arrow.arrow-top[data-v-df35f72e]{right:50%;transform:translate(50%)}.language-same-tip .arrow.arrow-bottom[data-v-df35f72e]{bottom:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-top:5px solid rgb(53,59,57)}[dir=ltr] .language-same-tip .arrow.arrow-bottom[data-v-df35f72e]{left:50%;transform:translate(-50%)}[dir=rtl] .language-same-tip .arrow.arrow-bottom[data-v-df35f72e]{right:50%;transform:translate(50%)}.model-list[data-v-de63a146]{width:100%;margin-bottom:8px;margin-top:10px}.model-list .login-prompt[data-v-de63a146]{margin-block:8px;cursor:pointer;padding:0 16px}.model-list .login-prompt .login-prompt-content[data-v-de63a146]{background:#366cff1a;border-radius:6px;padding:7px 0;text-align:center}.model-list .login-prompt .login-prompt-content .login-prompt-text[data-v-de63a146]{font-weight:600;font-size:12px;line-height:150%;color:#2962ff}.model-list .section-title[data-v-de63a146]{padding:0 16px;margin-bottom:8px;display:flex;align-items:center;gap:8px;font-weight:600;font-size:12px;line-height:16px;color:#000000e6}.model-list .model-group .model-item[data-v-de63a146]{display:flex;justify-content:space-between;align-items:center;height:44px;padding:0 16px;cursor:pointer;color:#000000e6}.model-list .model-group .model-item.selected[data-v-de63a146],.model-list .model-group .model-item[data-v-de63a146]:hover{color:#2962ff}.model-list .model-group .model-item .model-info[data-v-de63a146]{display:flex;align-items:center;gap:8px}.model-list .model-group .model-item .model-icon[data-v-de63a146]{width:20px;height:20px;flex-shrink:0}.model-list .model-group .model-item .model-name[data-v-de63a146]{font-weight:400;font-size:14px}.model-list .model-group .model-item .tag-icon[data-v-de63a146]{height:16px;width:auto}.model-service-select[data-v-b39dfa56]{position:relative;-webkit-user-select:none;user-select:none}.model-service-select .select-input[data-v-b39dfa56]{position:relative;display:flex;align-items:center;justify-content:space-between;height:42px;padding:0 16px;cursor:pointer;background-color:#f7f7f7;border:1px solid rgb(224,224,224);border-radius:48px}.model-service-select .select-input[data-v-b39dfa56]:hover{border-color:#a7a7a7}.model-service-select .select-input[data-v-b39dfa56]:active,.model-service-select .select-input.active[data-v-b39dfa56]{background-color:#eff3ff;border-color:#2962ff}.model-service-select .select-input[disabled][data-v-b39dfa56],.model-service-select .select-input.disabled[data-v-b39dfa56]{outline:none;opacity:.4}.model-service-select .select-input[disabled][data-v-b39dfa56]:hover,.model-service-select .select-input[disabled][data-v-b39dfa56]:active,.model-service-select .select-input.disabled[data-v-b39dfa56]:hover,.model-service-select .select-input.disabled[data-v-b39dfa56]:active{background-color:transparent}.model-service-select .select-input .select-label[data-v-b39dfa56]{font-size:14px;opacity:.6;color:#000}[dir=ltr] .model-service-select .select-input .select-label[data-v-b39dfa56]{margin-right:8px}[dir=rtl] .model-service-select .select-input .select-label[data-v-b39dfa56]{margin-left:8px}[dir=ltr] .model-service-select .select-input .select-icon[data-v-b39dfa56]{margin-right:4px}[dir=rtl] .model-service-select .select-input .select-icon[data-v-b39dfa56]{margin-left:4px}.model-service-select .select-input .select-text[data-v-b39dfa56]{flex:1;font-weight:500;font-size:14px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}[dir=ltr] .model-service-select .select-input .select-text[data-v-b39dfa56]{text-align:left}[dir=rtl] .model-service-select .select-input .select-text[data-v-b39dfa56]{text-align:right}[dir=ltr] .model-service-select .select-input.active .select-arrow[data-v-b39dfa56]{transform:rotate(180deg)}[dir=rtl] .model-service-select .select-input.active .select-arrow[data-v-b39dfa56]{transform:rotate(-180deg)}.model-service-select .select-input .select-arrow[data-v-b39dfa56]{transition:transform .2s ease-in-out}.model-service-select .select-popup[data-v-b39dfa56]{display:flex;width:250px;border-radius:12px;border:1px solid rgba(46,50,60,.1);box-shadow:0 12px 32px #00000029}.model-service-select .service-icon[data-v-b39dfa56]{width:22px;height:22px;background-size:contain;background-repeat:no-repeat}.search-input[data-v-adb5b7ba]{position:relative}.search-input.search-input-active .icon-search[data-v-adb5b7ba],.search-input.search-input-active .icon-loading[data-v-adb5b7ba]{opacity:1}.search-input.search-input-error .search-input-item[data-v-adb5b7ba]{outline:none;border-color:#d43d38;box-shadow:none}.search-input.search-input-error .search-input-item[data-v-adb5b7ba]:active,.search-input.search-input-error .search-input-item[data-v-adb5b7ba]:focus{border-color:#d43d38}.search-input .search-input-item[data-v-adb5b7ba]{width:100%;height:36px;padding-inline:56px 36px;color:#000;background-color:#fff;border:1px solid rgb(224,224,224);border-radius:48px}.search-input .search-input-item[data-v-adb5b7ba]:hover{border-color:#a7a7a7}.search-input .search-input-item[data-v-adb5b7ba]:active,.search-input .search-input-item[data-v-adb5b7ba]:focus{outline:none;border-color:#2962ff;box-shadow:none}.search-input .search-input-item[data-v-adb5b7ba]::input-placeholder{font-size:12px;line-height:14px;color:#0d0d0d75}.search-input .icon-search[data-v-adb5b7ba],.search-input .icon-close[data-v-adb5b7ba]{position:absolute;inset-block-start:8px;z-index:1}.search-input .icon-search[data-v-adb5b7ba]{inset-inline-start:24px}.search-input .icon-close[data-v-adb5b7ba]{inset-inline-end:16px;cursor:pointer;opacity:.6}.search-input .icon-close[data-v-adb5b7ba]:hover{opacity:1}.language-select-container .select-subtext[data-v-a7f3948a]{display:inline-block;margin-inline-start:4px;font-size:14px;font-weight:400;color:#000;opacity:.6}.language-select-container .select-subtext.select-subtext-prefix[data-v-a7f3948a]{margin-inline-end:8px}.language-select-container .language-select-icon[data-v-a7f3948a]{width:24px;height:24px;display:flex;align-items:center;justify-content:center;background-color:#2962ff;border-radius:50%}.language-select-container .search-input[data-v-a7f3948a]{margin:0 24px 8px}.language-select-container[data-v-a7f3948a] .select-label{font-weight:400;font-size:12px}.language-select-container[data-v-a7f3948a] .select-options .option-list .option{height:62px;padding-block:12px}.language-select-container[data-v-a7f3948a] .select-options .option-list .selected .selected-icon{display:block}.language-select-container[data-v-a7f3948a] .select-options .option-list .selected .language-label{font-weight:500;color:#2962ff}.language-select-container .selected-icon[data-v-a7f3948a]{position:absolute;inset-inline-start:30px;top:50%;display:none;transform:translateY(-50%)}.language-select-container .language-option[data-v-a7f3948a]{display:flex;flex-direction:column;gap:8px;width:198px}.language-select-container .language-option .language-label[data-v-a7f3948a]{font-size:14px;color:#333}.language-select-container .language-option .language-name[data-v-a7f3948a]{font-size:12px;color:#636363}.language-select-container.narrower[data-v-a7f3948a] .select-input .select-label{padding-inline-start:10px}.language-select-container.narrower[data-v-a7f3948a] .select-options{height:476px;width:200px;border-radius:8px;padding:0}.language-select-container.narrower[data-v-a7f3948a] .select-options .search-input{margin-inline:0;margin:8px}.language-select-container.narrower[data-v-a7f3948a] .select-options .search-input .icon-search{inset-inline-start:16px}.language-select-container.narrower[data-v-a7f3948a] .select-options .search-input .search-input-item{padding-inline:40px 10px;border-radius:8px}.language-select-container.narrower[data-v-a7f3948a] .select-options .option-list .option{padding-inline:14px 54px;padding-block:0;height:38px;border-radius:0}.language-select-container.narrower[data-v-a7f3948a] .select-options .option-list .option .selected-icon{inset-inline-start:auto;inset-inline-end:30px}.language-select-container.narrower[data-v-a7f3948a] .select-options .option-list .option .language-option .language-label{width:170px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.language-select-container.narrower[data-v-a7f3948a] .select-options .option-list .option.selected .language-option .language-label{width:130px}.language-select-container.narrower[data-v-a7f3948a] .select-options .option-list .option[data-value=divider]{grid-column:1/-1;height:1px;margin:4px 0;cursor:default;pointer-events:none;border-bottom:1px solid rgb(236,236,236)}.native-language-select-container[data-v-c981ab98]{position:relative;display:flex;gap:8px;width:100%;align-items:center;justify-content:space-between;height:42px;padding:0 16px;background-color:#f7f7f7;border:1px solid rgb(224,224,224);border-radius:48px;cursor:pointer}.native-language-select-container[data-v-c981ab98]:hover{border-color:#a7a7a7}.native-language-select-container[data-v-c981ab98]:active,.native-language-select-container.active[data-v-c981ab98]{background-color:#eff3ff;border-color:#2962ff}.native-language-select-container[disabled][data-v-c981ab98],.native-language-select-container.disabled[data-v-c981ab98]{outline:none;opacity:.4}.native-language-select-container[disabled][data-v-c981ab98]:hover,.native-language-select-container[disabled][data-v-c981ab98]:active,.native-language-select-container.disabled[data-v-c981ab98]:hover,.native-language-select-container.disabled[data-v-c981ab98]:active{background-color:transparent}.native-language-select-container .native-language-select-label[data-v-c981ab98]{font-size:14px;opacity:.6;color:#000}.native-language-select-container .native-language-text[data-v-c981ab98]{flex:1;font-size:14px;color:#000;font-weight:500;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.native-language-select-container .language-select-input[data-v-c981ab98]{cursor:pointer;position:absolute;background-color:transparent;-webkit-appearance:none;-moz-appearance:none;appearance:none;outline:none;box-shadow:none;border:none;opacity:0;flex:1;top:0;left:0;right:0;bottom:0;border-radius:48px;color:#000;font-size:14px}[dir=ltr] .native-language-select-container .language-select-input[data-v-c981ab98]{padding-left:12px}[dir=rtl] .native-language-select-container .language-select-input[data-v-c981ab98]{padding-right:12px}[dir=ltr] .native-language-select-container.active .select-arrow[data-v-c981ab98]{transform:rotate(180deg)}[dir=rtl] .native-language-select-container.active .select-arrow[data-v-c981ab98]{transform:rotate(-180deg)}.native-language-select-container .select-arrow[data-v-c981ab98]{transition:transform .2s ease-in-out}</style><style>@charset "UTF-8";.buy-sku[data-v-4db0bd4c]{display:flex;width:100%;flex-direction:column;gap:12px}.buy-sku .buy-sku-item[data-v-4db0bd4c]{min-height:78px;cursor:pointer;border:1px solid rgba(0,0,0,.1);border-radius:12px;padding:12px 16px 16px;position:relative;background-color:#fff}.buy-sku .buy-sku-item.selected[data-v-4db0bd4c]{border:1px solid transparent;border-radius:12px}[dir=ltr] .buy-sku .buy-sku-item.selected[data-v-4db0bd4c]{background:linear-gradient(#fff,#fff) padding-box,linear-gradient(91.47deg,#33c2ff,#2963ff) border-box}[dir=rtl] .buy-sku .buy-sku-item.selected[data-v-4db0bd4c]{background:linear-gradient(#fff,#fff) padding-box,linear-gradient(-91.47deg,#33c2ff,#2963ff) border-box}.buy-sku .permit-text[data-v-4db0bd4c]{min-height:24px;margin-bottom:4px;align-items:start}.buy-sku .permit-text .title[data-v-4db0bd4c]{display:flex;align-items:center;gap:8px;font-size:14px;line-height:20px}.buy-sku .permit-text .popular-tag[data-v-4db0bd4c]{white-space:nowrap;font-size:12px;line-height:16px;font-weight:600;color:#ff972f;background-color:#ffb22233;padding:4px 10px;border-radius:22px}[dir=ltr] .buy-sku .permit-text .popular-tag[data-v-4db0bd4c]{margin-left:8px}[dir=rtl] .buy-sku .permit-text .popular-tag[data-v-4db0bd4c]{margin-right:8px}.buy-sku .price-text[data-v-4db0bd4c]{min-height:16px}.buy-sku .price-text .price .price-value[data-v-4db0bd4c]{font-size:18px;line-height:22px;font-weight:600}.buy-sku .price-text .price .price-unit[data-v-4db0bd4c]{font-size:12px;line-height:16px}.buy-sku .price-text .price-total-text[data-v-4db0bd4c]{font-size:12px;line-height:16px;color:#0009}[dir=ltr] .buy-sku .price-text .price-total-text[data-v-4db0bd4c]{margin-left:8px}[dir=rtl] .buy-sku .price-text .price-total-text[data-v-4db0bd4c]{margin-right:8px}.buy-sku .skeleton .title[data-v-4db0bd4c]{width:20%;height:24px}.buy-sku .skeleton .price[data-v-4db0bd4c]{width:30%;height:20px}.buy-sku .skeleton .price-total-text[data-v-4db0bd4c]{width:40%;height:16px}.buy-dialog-overlay[data-v-7dcab905]{position:fixed;top:0;left:0;right:0;bottom:0;background:transparent;display:flex;align-items:center;justify-content:center;z-index:2147483647;-webkit-user-select:none;user-select:none;overflow:scroll;color:#000000e6}.buy-dialog-overlay.with-mask[data-v-7dcab905]{background:#0009}.buy-dialog[data-v-7dcab905]{position:relative;width:480px;border-radius:24px;box-shadow:0 12px 32px #00000014;padding:0;box-sizing:border-box}[dir=ltr] .buy-dialog[data-v-7dcab905]{background:linear-gradient(180deg,#e5faff,#fff 40%)}[dir=rtl] .buy-dialog[data-v-7dcab905]{background:linear-gradient(-180deg,#e5faff,#fff 40%)}.close-btn-wrapper[data-v-7dcab905]{position:absolute;top:16px;z-index:10;cursor:pointer}[dir=ltr] .close-btn-wrapper[data-v-7dcab905]{right:16px}[dir=rtl] .close-btn-wrapper[data-v-7dcab905]{left:16px}.logo-wrapper[data-v-7dcab905]{display:flex;justify-content:center;align-items:center;margin-top:40px;margin-bottom:12px}.dialog-content[data-v-7dcab905]{display:flex;flex-direction:column;align-items:center;width:100%;padding:0 40px 32px}.header-section[data-v-7dcab905]{text-align:center;display:flex;align-items:center}.limit-text[data-v-7dcab905]{font-size:14px;line-height:1.75}.limit-text .limit-text-prefix[data-v-7dcab905]:after{content:" "}.upgrade-text[data-v-7dcab905]{-webkit-text-fill-color:transparent}[dir=ltr] .upgrade-text[data-v-7dcab905]{background:linear-gradient(90deg,#33c2ff 30.25%,#2963ff 70.38%)}[dir=rtl] .upgrade-text[data-v-7dcab905]{background:linear-gradient(-90deg,#33c2ff 30.25%,#2963ff 70.38%)}[dir] .upgrade-text[data-v-7dcab905]{-webkit-background-clip:text;background-clip:text}.features-list[data-v-7dcab905]{margin-top:24px;display:flex;flex-direction:column;gap:12px}.feature-item[data-v-7dcab905]{display:flex;position:relative}.feature-main-icon[data-v-7dcab905]{width:24px;height:24px}[dir=ltr] .feature-main-icon[data-v-7dcab905]{margin-right:8px}[dir=rtl] .feature-main-icon[data-v-7dcab905]{margin-left:8px}.feature-text-group[data-v-7dcab905]{display:flex;flex-direction:column;gap:4px;flex:1}[dir=ltr] .feature-text-group[data-v-7dcab905]{margin-right:8px}[dir=rtl] .feature-text-group[data-v-7dcab905]{margin-left:8px}.feature-title-group[data-v-7dcab905]{display:flex;justify-content:space-between}.feature-title[data-v-7dcab905]{flex:1;font-size:14px;line-height:24px}.feature-desc[data-v-7dcab905]{font-size:12px;font-weight:400;line-height:1.75;color:#0009}.feature-right-icons[data-v-7dcab905]{display:flex;gap:8px;justify-content:end}[dir=ltr] .feature-right-icons[data-v-7dcab905]{margin-left:8px}[dir=rtl] .feature-right-icons[data-v-7dcab905]{margin-right:8px}.right-icon[data-v-7dcab905]{width:20px;height:20px}.subscription-section[data-v-7dcab905]{margin-top:24px;width:100%;padding:0 40px;box-sizing:border-box;display:flex;flex-direction:column;gap:12px}.subscription-option[data-v-7dcab905]{position:relative;width:100%;height:78px;border:1px solid rgba(0,0,0,.1);border-radius:12px;cursor:pointer;transition:all .2s;display:flex;align-items:center;padding:0 16px;box-sizing:border-box}.subscription-option.selected[data-v-7dcab905]{border:1px solid transparent}[dir=ltr] .subscription-option.selected[data-v-7dcab905]{background:linear-gradient(#fff,#fff) padding-box,linear-gradient(135deg,#33c2ff,#2963ff) border-box}[dir=rtl] .subscription-option.selected[data-v-7dcab905]{background:linear-gradient(#fff,#fff) padding-box,linear-gradient(-135deg,#33c2ff,#2963ff) border-box}.subscription-option[data-v-7dcab905]:hover{border-color:#2962ff4d}.radio-button[data-v-7dcab905]{width:16px;height:16px;border:1px solid #C8C8C8;border-radius:50%;flex-shrink:0;display:flex;align-items:center;justify-content:center;background:#f7f7f7}.subscription-option.selected .radio-button[data-v-7dcab905]{border-color:#2962ff;background:#fff}.radio-inner[data-v-7dcab905]{width:8px;height:8px;border-radius:50%;background:#2962ff}.subscription-content[data-v-7dcab905]{flex:1;display:flex;align-items:center;position:relative}[dir=ltr] .subscription-content[data-v-7dcab905]{margin-left:24px}[dir=rtl] .subscription-content[data-v-7dcab905]{margin-right:24px}.subscription-label[data-v-7dcab905]{font-family:Inter;font-size:14px;font-weight:400;line-height:20px;min-width:54px}.save-badge[data-v-7dcab905]{position:absolute;top:50%;transform:translateY(-50%);background:#ffb22233;border-radius:22px;padding:4px 11px;font-family:Inter;font-size:12px;font-weight:600;line-height:16px;color:#ff972f;text-align:center}[dir=ltr] .save-badge[data-v-7dcab905]{right:0}[dir=rtl] .save-badge[data-v-7dcab905]{left:0}.price-info[data-v-7dcab905]{flex:1;display:flex;align-items:center;justify-content:space-between}[dir=ltr] .price-info[data-v-7dcab905]{margin-left:0}[dir=rtl] .price-info[data-v-7dcab905]{margin-right:0}.price-row[data-v-7dcab905]{display:flex;align-items:baseline;gap:4px}.price-amount[data-v-7dcab905]{font-family:Inter;font-size:18px;font-weight:600;line-height:22px}.price-unit[data-v-7dcab905]{font-family:Inter;font-size:12px;font-weight:400;line-height:16px}.total-spend[data-v-7dcab905]{font-family:Inter;font-size:12px;font-weight:400;line-height:16px;color:#0009}[dir=ltr] .total-spend[data-v-7dcab905]{text-align:right;margin-left:auto}[dir=rtl] .total-spend[data-v-7dcab905]{text-align:left;margin-right:auto}.footer-section[data-v-7dcab905]{margin-top:24px;width:100%;display:flex;flex-direction:column;align-items:center;gap:16px}.buy-button[data-v-7dcab905]{width:100%;min-height:52px;font-size:16px;line-height:24px;font-weight:600}.view-details[data-v-7dcab905]{font-size:14px;line-height:20px;color:#2962ff;cursor:pointer;text-decoration:underline;text-align:center}.continue-translate-dialog[data-v-7490fb5a]{position:fixed;z-index:2147483647;bottom:32px;width:348px;padding:24px;font-weight:400;background-color:#fff;color:#000;border:1px solid rgb(224,224,224);border-radius:16px;box-shadow:0 12px 24px #00000014;-webkit-user-select:none;user-select:none}[dir=ltr] .continue-translate-dialog[data-v-7490fb5a]{right:32px}[dir=rtl] .continue-translate-dialog[data-v-7490fb5a]{left:32px}.continue-translate-dialog .dialog-header[data-v-7490fb5a]{display:flex;gap:12px;align-items:center;margin-bottom:16px}.continue-translate-dialog .dialog-header .header-logo[data-v-7490fb5a]{display:flex;flex:1;align-items:center;gap:12px}.continue-translate-dialog .dialog-header .header-logo .logo-icon[data-v-7490fb5a]{height:24px;width:24px;border-radius:6px}.continue-translate-dialog .dialog-header .header-logo .logo-name[data-v-7490fb5a]{font-weight:600;font-size:16px;line-height:24px}.continue-translate-dialog .dialog-content[data-v-7490fb5a]{margin-bottom:20px}.continue-translate-dialog .dialog-content .description[data-v-7490fb5a]{font-size:14px;line-height:20px;color:#000000e6;margin:0 0 16px}.continue-translate-dialog .dialog-content .duration-selector[data-v-7490fb5a]{display:flex;align-items:center;justify-content:space-between;gap:16px}.continue-translate-dialog .dialog-content .duration-selector .duration-label[data-v-7490fb5a]{font-size:14px;font-weight:500;line-height:20px;color:#000}.continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a]{flex:1;min-width:160px;-webkit-user-select:none;user-select:none}.continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-input{border-radius:8px}[dir=ltr] .continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-input{padding-left:12px}[dir=rtl] .continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-input{padding-right:12px}[dir=ltr] .continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-input .select-label{text-align:right}[dir=rtl] .continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-input .select-label{text-align:left}.continue-translate-dialog .dialog-content .duration-selector .duration-select[data-v-7490fb5a] .select-options{height:fit-content;border-radius:8px}.continue-translate-dialog .dialog-content .setting-item[data-v-7490fb5a]{display:flex;justify-content:space-between;align-items:center;margin-top:20px;line-height:16px;font-weight:400;gap:4px}.continue-translate-dialog .dialog-content .setting-item .setting-item-label[data-v-7490fb5a]{flex:1}.continue-translate-dialog .dialog-footer .confirm-btn[data-v-7490fb5a]{height:48px;border-radius:12px;font-size:16px;font-weight:600}.translate-error-exceed-limit-tip-container[data-v-0d6b1902]{width:300px;max-width:90vw}.hover-ball-onboarding-container[data-v-e0b307f8]{position:absolute;display:flex;flex-direction:column;bottom:-30px;border-radius:12px;background-color:#fff;width:300px;border:1px solid rgb(224,224,224);box-shadow:0 12px 32px #00000014;transition:none}.hover-ball-onboarding-container .hover-ball-onboarding-close[data-v-e0b307f8]{position:absolute;top:8px}[dir=ltr] .hover-ball-onboarding-container .hover-ball-onboarding-close[data-v-e0b307f8]{right:8px}[dir=rtl] .hover-ball-onboarding-container .hover-ball-onboarding-close[data-v-e0b307f8]{left:8px}.hover-ball-onboarding-container .hover-ball-onboarding-image[data-v-e0b307f8]{height:180px;border-radius:12px 12px 0 0;background-repeat:no-repeat;background-position:center;background-size:contain}.hover-ball-onboarding-container .hover-ball-onboarding-content[data-v-e0b307f8]{margin:16px 20px}.hover-ball-onboarding-container .hover-ball-onboarding-content .hover-ball-onboarding-title[data-v-e0b307f8]{font-weight:500;font-size:16px;line-height:24px;text-align:center;color:#000000e6}.hover-ball-onboarding-container .hover-ball-onboarding-content .hover-ball-onboarding-desc[data-v-e0b307f8]{font-weight:400;font-size:14px;line-height:22px;text-align:center;color:#333333e6;margin-top:8px}.hover-ball-onboarding-container .hover-ball-onboarding-content .hover-ball-onboarding-button[data-v-e0b307f8]{margin-top:24px}.onetap-login-tip[data-v-2a3e1960]{position:relative;min-width:320px;background:#fff;border:1px solid rgb(224,224,224);border-radius:16px;padding:20px 24px 8px;font-weight:400;font-size:14px;cursor:auto;text-shadow:none;box-shadow:0 12px 32px #00000014}.title[data-v-2a3e1960]{line-height:20px;color:#000000e6}.description[data-v-2a3e1960]{display:flex;align-items:center;margin-bottom:16px;line-height:20px;gap:4px}.description-text[data-v-2a3e1960]{color:#0009}.brand-container[data-v-2a3e1960]{display:flex;align-items:center;gap:4px}.brand-icon[data-v-2a3e1960]{width:16px;height:16px}.brand-text[data-v-2a3e1960]{color:#000000e6}.login-button[data-v-2a3e1960]{display:flex;align-items:center;border-radius:8px;padding:12px;gap:8px;cursor:pointer;white-space:nowrap;color:#000000e6}.login-button[data-v-2a3e1960]:hover{background:#f7f7f7}.login-button[data-v-2a3e1960]:active,.login-button.active[data-v-2a3e1960]{background:#e0e0e0}.login-button .login-button-text[data-v-2a3e1960]{flex:1}.login-button .login-button-icon[data-v-2a3e1960]{width:24px;height:24px}.google-login[data-v-2a3e1960]{border:1px solid rgb(218,218,218);font-weight:600;margin-bottom:4px}[data-v-2a3e1960] .icon-button{width:24px;height:24px}.confirm-container[data-v-a3738775]{display:flex;position:relative;z-index:1;flex-direction:column;width:258px;border-radius:12px;border:1px solid rgb(224,224,224);background-color:#fff;box-shadow:0 12px 32px #00000014;cursor:default;-webkit-user-select:select;user-select:select;padding-top:8px;padding-bottom:16px}.confirm-container .confirm-header[data-v-a3738775]{display:flex;justify-content:space-between;align-items:center}[dir=ltr] .confirm-container .confirm-header[data-v-a3738775]{padding-left:24px;padding-right:8px}[dir=rtl] .confirm-container .confirm-header[data-v-a3738775]{padding-right:24px;padding-left:8px}.confirm-container .confirm-header .title[data-v-a3738775]{font-weight:500;font-size:12px;color:#000;opacity:.9}.confirm-container .confirm-content[data-v-a3738775]{display:flex;flex:1;flex-direction:column;gap:10;font-weight:400;font-size:12px;color:#333;margin-top:14px;margin-bottom:12px}[dir=ltr] .confirm-container .confirm-content[data-v-a3738775]{padding-left:24px;padding-right:16px}[dir=rtl] .confirm-container .confirm-content[data-v-a3738775]{padding-right:24px;padding-left:16px}.confirm-container .confirm-content[data-v-a3738775] .base-radio{flex-direction:column;align-items:start}.confirm-container .confirm-content[data-v-a3738775] .base-radio .radio-container .radio{width:12px;height:12px}.confirm-container .confirm-content[data-v-a3738775] .base-radio .radio-container .radio.checked:after{width:8px;height:8px;margin:1px}.confirm-container .confirm-content .settings-can-be-re-enable[data-v-a3738775]{font-size:12px;color:#0009;margin-top:16px}.confirm-container .confirm-content .settings-can-be-re-enable .settings-can-be-re-enable-link[data-v-a3738775]{cursor:pointer;-webkit-user-select:none;user-select:none;font-size:12px;font-weight:600;color:#2962ff}.confirm-container .confirm-content .settings-can-be-re-enable .settings-can-be-re-enable-link[data-v-a3738775]:hover{opacity:.8}.confirm-container .confirm-content .settings-can-be-re-enable .settings-can-be-re-enable-link[data-v-a3738775]:active,.confirm-container .confirm-content .settings-can-be-re-enable .settings-can-be-re-enable-link.active[data-v-a3738775]{color:#1c4eda;opacity:1}.confirm-container .confirm-footer[data-v-a3738775]{display:flex;justify-content:flex-end}[dir=ltr] .confirm-container .confirm-footer[data-v-a3738775]{padding-right:16px}[dir=rtl] .confirm-container .confirm-footer[data-v-a3738775]{padding-left:16px}.confirm-container .confirm-footer .confirm-button[data-v-a3738775]{height:32px;border-radius:8px;font-size:12px;line-height:100%}.hover-ball-container[data-v-8964fea1]{position:fixed;z-index:2147483647;width:36px;display:flex;flex-direction:column;align-items:center;justify-content:center;cursor:pointer;-webkit-user-select:none;user-select:none}.hover-ball-container .gift-ball-container[data-v-8964fea1]{display:flex;justify-content:center;align-items:center;cursor:pointer;width:36px;height:36px;background:#fff;border-radius:24px;margin-bottom:4px;border:1px solid rgba(151,151,151,.14);box-shadow:0 10px 16px #00000014}.hover-ball-container .gift-ball-container .gift-image[data-v-8964fea1]{width:18px;height:18px;background-size:cover}.hover-ball-container .actionContainer[data-v-8964fea1]{display:flex;height:38px;transition:none;rotate:-90deg;overflow:hidden;width:100%;align-items:center;flex-direction:column;padding:4px;background:#fff;border-top-left-radius:24px;border-top-right-radius:24px;border:1px solid;border-image-source:linear-gradient(266.36deg,rgba(224,224,224,.48) -8.57%,rgba(151,151,151,.14) 101.08%);box-shadow:0 10px 16px #00000014}.hover-ball-container .actionContainer .translateIcon[data-v-8964fea1]{display:flex;justify-content:center;align-items:center;cursor:pointer;width:28px;height:28px;border-radius:24px 24px 4px 4px;opacity:.5;background:radial-gradient(50.36% 54.17% at 43.75% 45.83%,#448cff,#4574f6 35.33%,#0e4eff 86.17%)}.hover-ball-container .actionContainer .otherIcons[data-v-8964fea1]{height:0px;transition:none;display:flex;gap:2px;flex-direction:column}.hover-ball-container .actionContainer .red-hot[data-v-8964fea1]{position:absolute;top:2px;width:4px;height:4px;border-radius:50%;background:#ff6c52}.hover-ball-container.hover .actionContainer[data-v-8964fea1]{rotate:0deg;height:156px;transition:height .1s ease;border-radius:24px;padding:3px 3px 7px}.hover-ball-container.hover .actionContainer .otherIcons[data-v-8964fea1]{transition:height .1s ease,margin-top .2s ease;height:110px;margin-top:6px}.hover-ball-container.hover .translateIcon[data-v-8964fea1]{opacity:1;background:radial-gradient(50.36% 54.17% at 43.75% 45.83%,#448cff,#4574f6 35.33%,#0e4eff 86.17%)}.hover-ball-container.hover .translateIcon[data-v-8964fea1]:active{opacity:1;background:#1c4eda}.hover-ball-container .closeIcon[data-v-8964fea1]{cursor:pointer;margin-top:6px;width:16px;height:16px}.hover-ball-container .successIcon[data-v-8964fea1],.hover-ball-container .hover-ball-close-second-confirm[data-v-8964fea1]{position:absolute}[dir=ltr] .hover-ball-container .hover-ball-close-second-confirm[data-v-8964fea1]{right:calc(100% - 4px);transition:right .2s ease}[dir=rtl] .hover-ball-container .hover-ball-close-second-confirm[data-v-8964fea1]{left:calc(100% - 4px);transition:left .2s ease}.hover-ball-container .login-tip-container[data-v-8964fea1]{position:absolute;top:0}.message-tip[data-v-8964fea1]{position:fixed;z-index:999}.hover-ball-tips[data-v-8964fea1]{position:fixed;z-index:2147483647;color:#fff;font-size:12px;line-height:16px;border-radius:8px;font-weight:400;padding:8px 12px;background-color:#000;border:1px solid rgb(54,54,54);box-shadow:0 12px 32px #00000014}.extract-text-window-container[data-v-5d491693]{position:fixed;display:flex;z-index:2147483647;border-radius:12px;width:550px;max-height:300px;background-color:#fff;border:1px solid rgba(13,13,13,.12);box-shadow:0 12px 32px #0d0d0d14;font-size:14px}.extract-text-window-container .extract-text-window-content-zone[data-v-5d491693]{flex:1;width:calc(100% - 12px);display:flex;flex-direction:column;word-break:normal;overflow-wrap:break-word;min-height:0}.extract-text-window-container .extract-text-window-header[data-v-5d491693]{flex-shrink:0;display:flex;align-items:center;justify-content:space-between;border-bottom:1px solid rgba(13,13,13,.08);height:56px;padding:0 16px;-webkit-user-select:none;user-select:none}.extract-text-window-container .extract-text-window-header .header-title[data-v-5d491693]{flex:1;font-weight:600;font-size:14px;color:#000000e6}.extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]{cursor:pointer;width:24px;height:24px;display:flex;padding:4px;border-radius:4px}[dir=ltr] .extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]{margin-right:-4px}[dir=rtl] .extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]{margin-left:-4px}.extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]:hover{background:#f0f0f0}.extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]:active,.extract-text-window-container .extract-text-window-header .window-action-icon[data-v-5d491693]:focus{background:#e0e0e0}.extract-text-window-container .extract-text-window-content[data-v-5d491693]{flex:1;padding:12px 16px;overflow-y:auto;min-height:100px}.extract-text-window-container .extract-text-window-content .content-text[data-v-5d491693]{font-size:14px;font-weight:400;line-height:1.75;color:#000000e6;white-space:pre-wrap;word-break:break-word}.extract-text-window-container .extract-text-window-footer[data-v-5d491693]{flex-shrink:0;display:flex;align-items:center;justify-content:end;margin-top:4px;margin-bottom:12px;padding:0 16px}.extract-text-window-container .extract-text-window-tip[data-v-5d491693]{position:absolute;bottom:50px;height:32px;padding:8px 12px;border-radius:6px;background:#353b39cc;color:#fff;font-size:12px;font-weight:400;white-space:nowrap;pointer-events:none;z-index:1000}[dir=ltr] .extract-text-window-container .extract-text-window-tip[data-v-5d491693]{right:0}[dir=rtl] .extract-text-window-container .extract-text-window-tip[data-v-5d491693]{left:0}.extract-text-window-container .extract-text-window-tip.with-icon[data-v-5d491693]{display:flex;align-items:center;justify-content:center;gap:4px}.extract-text-window-container .extract-text-window-tip .tip-icon[data-v-5d491693]{flex-shrink:0}.extract-text-window-container .extract-text-window-tip .tip-text[data-v-5d491693]{line-height:15px;height:15px}.extract-text-window-container .extract-text-window-tip[data-v-5d491693]:after{content:"";position:absolute;bottom:-4px;width:0;height:0;border-left:5px solid transparent;border-right:5px solid transparent;border-top:4px solid rgba(53,59,57,.8)}[dir=ltr] .extract-text-window-container .extract-text-window-tip[data-v-5d491693]:after{right:12px;transform:translate(-50%)}[dir=rtl] .extract-text-window-container .extract-text-window-tip[data-v-5d491693]:after{left:12px;transform:translate(50%)}.translate-setting-container[data-v-de14b6a3]{display:inline-flex;position:absolute;z-index:1;flex-direction:column;border-radius:12px;border:1px solid rgb(224,224,224);background-color:#fff;box-shadow:0 12px 32px #00000014;cursor:default;width:fit-content;-webkit-user-select:none;user-select:none}.translate-setting-container .close-button[data-v-de14b6a3]{position:absolute;top:12px}[dir=ltr] .translate-setting-container .close-button[data-v-de14b6a3]{right:12px}[dir=rtl] .translate-setting-container .close-button[data-v-de14b6a3]{left:12px}.translate-setting-container .setting-content[data-v-de14b6a3]{display:flex;flex-direction:column;padding:16px 16px 12px;gap:16px;border-bottom:1px solid rgba(46,60,53,.1)}.translate-setting-container .setting-content .setting-section .setting-section-label[data-v-de14b6a3]{font-size:16px;color:#000000e6;font-weight:600;line-height:16px;margin-bottom:8px}.translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input{height:40px;width:220px;gap:6px}[dir=ltr] .translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input{padding-left:16px}[dir=rtl] .translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input{padding-right:16px}.translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input .select-label{color:#000;font-weight:400;font-size:14px}[dir=ltr] .translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input .service-icon{margin-right:0}[dir=rtl] .translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input .service-icon{margin-left:0}.translate-setting-container .setting-content .setting-section[data-v-de14b6a3] .select-input .select-text{color:#000;font-weight:400;font-size:14px}.translate-setting-container .setting-footer[data-v-de14b6a3]{display:flex;padding:12px 16px 16px}.translate-setting-container .setting-footer .more-setting-link[data-v-de14b6a3]{color:#2962ff;font-size:14px;font-weight:400;cursor:pointer;border-bottom:1px solid rgb(41,98,255)}.translate-setting-container .setting-footer .more-setting-link[data-v-de14b6a3]:hover{opacity:.8}.translate-setting-container .setting-footer .more-setting-link[data-v-de14b6a3]:active,.translate-setting-container .setting-footer .more-setting-link.active[data-v-de14b6a3]{color:#1c4eda;opacity:1}.toast-tip-wrapper[data-v-a0cdc0c3]{position:relative;border-radius:6px;filter:drop-shadow(0px 12px 32px rgba(13,13,13,.08))}.toast-tip-wrapper .toast-tip[data-v-a0cdc0c3]{position:relative;background:#353b39cc;border-radius:6px;font-size:12px;line-height:16px;display:flex;align-items:center;min-height:32px}[dir=ltr] .toast-tip-wrapper .toast-tip[data-v-a0cdc0c3]{padding:8px 34px 8px 12px}[dir=rtl] .toast-tip-wrapper .toast-tip[data-v-a0cdc0c3]{padding:8px 12px 8px 34px}.toast-tip-wrapper .toast-tip.hide-close-button[data-v-a0cdc0c3]{padding:8px 12px}.toast-tip-wrapper .toast-tip .tip-content[data-v-a0cdc0c3]{flex:1;color:#fff}[dir=ltr] .toast-tip-wrapper .toast-tip .tip-content[data-v-a0cdc0c3]{text-align:left}[dir=rtl] .toast-tip-wrapper .toast-tip .tip-content[data-v-a0cdc0c3]{text-align:right}.toast-tip-wrapper .toast-tip .icon-close[data-v-a0cdc0c3]{position:absolute;top:8px;cursor:pointer;color:#fff;flex-shrink:0}[dir=ltr] .toast-tip-wrapper .toast-tip .icon-close[data-v-a0cdc0c3]{right:12px}[dir=rtl] .toast-tip-wrapper .toast-tip .icon-close[data-v-a0cdc0c3]{left:12px}.toast-tip-wrapper .toast-tip .icon-close[data-v-a0cdc0c3] svg path{stroke:#ccc;fill:#ccc}.toast-tip-wrapper .toast-tip .arrow[data-v-a0cdc0c3]{position:absolute;width:0;height:0}.toast-tip-wrapper .toast-tip .arrow.arrow-bottom[data-v-a0cdc0c3]{bottom:-4px;border-left:4px solid transparent;border-right:4px solid transparent;border-top:4px solid rgba(53,59,57,.8)}.toast-tip-wrapper .toast-tip .arrow.arrow-top[data-v-a0cdc0c3]{top:-4px;border-left:4px solid transparent;border-right:4px solid transparent;border-bottom:4px solid rgba(53,59,57,.8)}.toast-tip-wrapper .toast-tip .arrow.arrow-right[data-v-a0cdc0c3]{border-top:4px solid transparent;border-bottom:4px solid transparent}[dir=ltr] .toast-tip-wrapper .toast-tip .arrow.arrow-right[data-v-a0cdc0c3]{right:-4px;border-left:4px solid rgba(53,59,57,.8)}[dir=rtl] .toast-tip-wrapper .toast-tip .arrow.arrow-right[data-v-a0cdc0c3]{left:-4px;border-right:4px solid rgba(53,59,57,.8)}.toast-tip-wrapper .toast-tip .arrow.arrow-left[data-v-a0cdc0c3]{border-top:4px solid transparent;border-bottom:4px solid transparent}[dir=ltr] .toast-tip-wrapper .toast-tip .arrow.arrow-left[data-v-a0cdc0c3]{left:-4px;border-right:4px solid rgba(53,59,57,.8)}[dir=rtl] .toast-tip-wrapper .toast-tip .arrow.arrow-left[data-v-a0cdc0c3]{right:-4px;border-left:4px solid rgba(53,59,57,.8)}.image-translate-ball-container[data-v-14943a0a]{position:fixed;z-index:2147483647}.image-translate-icon-container[data-v-14943a0a]{position:relative;display:grid;grid-template-columns:32px 0fr;z-index:2147483647;padding:2px;width:32px;height:32px;transition:width .2s ease,grid-template-columns .2s ease;border-radius:24px;background:#353842e6;white-space:nowrap}.image-translate-icon-container.hover[data-v-14943a0a]{width:116px;grid-template-columns:32px 1fr}.image-translate-icon-container .translateIcon[data-v-14943a0a]{position:relative;display:inline-flex;justify-content:center;align-items:center;cursor:pointer;width:28px;height:28px;border-radius:14px}.image-translate-icon-container .translateIcon[data-v-14943a0a]:hover,.image-translate-icon-container .translateIcon.active[data-v-14943a0a]{background:#0006}.image-translate-icon-container .translateIcon.loading[data-v-14943a0a]{animation:rotate 1s linear infinite}.image-translate-icon-container .image-ball-status-icon[data-v-14943a0a]{position:absolute;bottom:-6px}.image-translate-icon-container .otherIcons[data-v-14943a0a]{display:inline-flex;min-width:0;overflow:hidden}.image-translate-icon-container .otherIcons .icon-button[data-v-14943a0a]{background:none;border:none;width:28px;height:28px;border-radius:14px;cursor:pointer;display:flex;align-items:center;justify-content:center;flex-shrink:0}.image-translate-icon-container .otherIcons .icon-button[data-v-14943a0a]:hover,.image-translate-icon-container .otherIcons .icon-button.active[data-v-14943a0a]{background:#0006}.image-translate-ball-popup-container[data-v-14943a0a]{position:absolute;z-index:2147483647}.image-translate-ball-colorful-tips-container[data-v-14943a0a]{position:absolute;bottom:38px}.image-translate-ball-toast-container[data-v-14943a0a]{position:absolute;bottom:42px;white-space:normal;max-width:320px;width:max-content}.image-translate-ball-close-second-confirm[data-v-14943a0a]{position:absolute;bottom:40px;pointer-events:all}[dir=ltr] .image-translate-ball-close-second-confirm[data-v-14943a0a]{right:0}[dir=rtl] .image-translate-ball-close-second-confirm[data-v-14943a0a]{left:0}.image-translate-ball-close-second-confirm .second-confirm-popup[data-v-14943a0a]{background:#fff;border:1px solid #eee;border-radius:8px;padding:12px;box-shadow:0 12px 32px #35384214}.image-translate-ball-close-second-confirm .second-confirm-popup .title[data-v-14943a0a]{font-size:14px;margin-bottom:8px}.image-translate-ball-close-second-confirm .second-confirm-popup .options[data-v-14943a0a]{display:flex;gap:8px}.image-translate-ball-close-second-confirm .second-confirm-popup .options button[data-v-14943a0a]{background:#f5f5f5;border:1px solid #ddd;border-radius:4px;padding:4px 8px;cursor:pointer}.improve-writing-style-window[data-v-2567b347]{width:var(--fde64a84);border-radius:12px;background-color:#fff;border:1px solid #E0E0E0;box-shadow:0 12px 32px #00000014;overflow:hidden;display:flex;flex-direction:column}.improve-writing-style-window .window-content[data-v-2567b347]{display:flex;flex-direction:column;max-height:calc(100vh - 20px);overflow-y:auto;padding-top:4px}.improve-writing-style-window .window-content .header-section[data-v-2567b347]{display:flex;flex-direction:row;align-items:center;height:48px;-webkit-user-select:none;user-select:none}[dir=ltr] .improve-writing-style-window .window-content .header-section[data-v-2567b347]{padding:12px 12px 12px 16px}[dir=rtl] .improve-writing-style-window .window-content .header-section[data-v-2567b347]{padding:12px 16px 12px 12px}.improve-writing-style-window .window-content .header-section .function-icon[data-v-2567b347]{margin-inline-end:4px}.improve-writing-style-window .window-content .header-section .function-label[data-v-2567b347]{font-size:14px;font-weight:600;line-height:1.5;color:#000000e6}.improve-writing-style-window .window-content .header-section .right-weaker-tip[data-v-2567b347]{flex:1;margin-inline:5px;font-size:12px;line-height:1.5;color:#0006}[dir=ltr] .improve-writing-style-window .window-content .header-section .right-weaker-tip[data-v-2567b347]{text-align:right}[dir=rtl] .improve-writing-style-window .window-content .header-section .right-weaker-tip[data-v-2567b347]{text-align:left}.improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]{cursor:pointer;width:24px;height:24px;display:flex;padding:4px;border-radius:4px}[dir=ltr] .improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]{margin-left:auto}[dir=rtl] .improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]{margin-right:auto}.improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]:hover{background:#f0f0f0}.improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]:active,.improve-writing-style-window .window-content .header-section .close-icon[data-v-2567b347]:focus{background:#e0e0e0}.improve-writing-style-window .window-content .content-section[data-v-2567b347]{flex:1;padding:12px 16px;border-bottom:1px solid rgba(46,60,53,.1);-webkit-user-select:none;user-select:none;font-size:14px;cursor:pointer;position:relative}.improve-writing-style-window .window-content .content-section[data-v-2567b347]:nth-of-type(2){border-top:1px solid rgba(46,60,53,.1)}.improve-writing-style-window .window-content .content-section[data-v-2567b347]:hover,.improve-writing-style-window .window-content .content-section[data-v-2567b347]:active{background-color:#f7f7f7}.improve-writing-style-window .window-content .content-section .hover-toast-tip[data-v-2567b347]{position:absolute;top:-21px}[dir=ltr] .improve-writing-style-window .window-content .content-section .hover-toast-tip[data-v-2567b347]{right:5px}[dir=rtl] .improve-writing-style-window .window-content .content-section .hover-toast-tip[data-v-2567b347]{left:5px}.improve-writing-style-window .window-content .content-section .text-item[data-v-2567b347]{line-height:1.5em;color:#000000e6;word-break:break-word;white-space:pre-wrap}.improve-writing-style-window .window-content .content-section .text-item .text-content-title[data-v-2567b347]{font-weight:600;line-height:1.5;color:#2962ff}.improve-writing-style-window .window-content .content-section .text-item .suffix-stars[data-v-2567b347]{word-break:break-all}.improve-writing-style-window .window-content .content-section .unlock-for-free .unlock-for-free-text[data-v-2567b347]{font-weight:600;color:#2962ff;text-decoration:underline;cursor:pointer}.improve-writing-style-window .window-content .content-section .unlock-for-free[data-v-2567b347]:hover,.improve-writing-style-window .window-content .content-section .unlock-for-free[data-v-2567b347]:active{opacity:.8}.improve-writing-style-window .window-content .content-section .unlock-for-free[data-v-2567b347]:before,.improve-writing-style-window .window-content .content-section .unlock-for-free[data-v-2567b347]:after{content:" ";display:inline}.improve-writing-style-window .window-content .footer-section[data-v-2567b347]{display:flex;align-items:center;justify-content:space-between;gap:4px;padding:16px;font-size:14px}.improve-writing-style-window .window-content .footer-section .footer-tip[data-v-2567b347]{flex:1;font-weight:400;line-height:1.5em;color:#000;-webkit-user-select:none;user-select:none}.improve-writing-style-window .window-content .footer-section .refresh-btn[data-v-2567b347]{min-width:76px;height:32px;padding-inline:12px;border-radius:6px;border:1px solid #DADADA;background-color:#fff;color:#000000e6;font-weight:400;line-height:1.21em;text-align:center;cursor:pointer;-webkit-user-select:none;user-select:none;white-space:nowrap}.improve-writing-style-window .window-content .footer-section .refresh-btn[data-v-2567b347]:hover{background-color:#f7f7f7;border-color:#a7a7a7}.improve-writing-style-window .window-content .footer-section .refresh-btn[data-v-2567b347]:active{background-color:#e0e0e0}.free-trial-btn[data-v-99e1f9ac]{height:28px;border:none;padding:0;font-size:12px;font-weight:600;line-height:16px;display:flex;align-items:center;gap:6px}.free-trial-btn .free-trial-btn-text[data-v-99e1f9ac]{overflow:hidden;text-overflow:ellipsis;white-space:nowrap;-webkit-text-fill-color:transparent;color:transparent}[dir=ltr] .free-trial-btn .free-trial-btn-text[data-v-99e1f9ac]{background:linear-gradient(90deg,#33c2ff,#2963ff)}[dir=rtl] .free-trial-btn .free-trial-btn-text[data-v-99e1f9ac]{background:linear-gradient(-90deg,#33c2ff,#2963ff)}[dir] .free-trial-btn .free-trial-btn-text[data-v-99e1f9ac]{background-clip:text;-webkit-background-clip:text}.free-trial-btn[data-v-99e1f9ac]:hover,.free-trial-btn[data-v-99e1f9ac]:active{background:transparent;border:none}.translate-window-footer-explain[data-v-c39678ae]{display:flex;gap:4px;border-radius:4px;align-items:center;-webkit-user-select:none;user-select:none;cursor:pointer;padding:4px;justify-content:center;line-height:0;height:30px}.translate-window-footer-explain span[data-v-c39678ae]{font-size:12px;color:#333}.translate-window-footer-explain[data-v-c39678ae]:hover{background:#f0f0f0}.translate-window-footer-explain.active span[data-v-c39678ae],.translate-window-footer-explain:active span[data-v-c39678ae]{color:#2962ff}.translate-window-footer-explain[data-v-c39678ae]:focus{background:#e0e0e0}.translate-window-footer-explain.disable[data-v-c39678ae]{cursor:not-allowed;opacity:.6}.translate-window-footer-explain.disable[data-v-c39678ae]:hover{background:none}.translate-window-footer-explain.disable[data-v-c39678ae]:active,.translate-window-footer-explain.disable[data-v-c39678ae]:focus{background:none}.translate-window-footer-action-wrapper[data-v-4c60f9ac]{display:flex;gap:5px;justify-content:flex-start;align-items:center;padding:10px;border-top:1px solid rgb(236,236,236)}.translate-window-footer-action-wrapper .translate-window-footer-action-item[data-v-4c60f9ac]{flex-shrink:0}.translate-window-footer-action-wrapper .empty-area[data-v-4c60f9ac]{flex:1}.translate-window-footer-action-wrapper .free-trial-btn[data-v-4c60f9ac]{flex-shrink:1}.translate-window-header[data-v-2ffd00cb]{position:relative;display:flex;align-items:center;justify-content:space-between;height:56px;border-bottom:1px solid rgb(236,236,236);font-size:12px;color:#333;-webkit-user-select:none;user-select:none}[dir=ltr] .translate-window-header[data-v-2ffd00cb]{padding-left:16px;padding-right:12px}[dir=rtl] .translate-window-header[data-v-2ffd00cb]{padding-right:16px;padding-left:12px}.translate-window-header .header-left[data-v-2ffd00cb]{display:flex;flex:1;min-width:0;gap:12px}.translate-window-header .header-left[data-v-2ffd00cb] .select-input{height:32px}[dir=ltr] .translate-window-header .header-left[data-v-2ffd00cb] .select-input{padding-left:4px;padding-right:10px}[dir=rtl] .translate-window-header .header-left[data-v-2ffd00cb] .select-input{padding-right:4px;padding-left:10px}.translate-window-header .header-left[data-v-2ffd00cb] .select-input .select-text{font-size:12px;color:#000;font-weight:400}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-input{border:none;gap:4px;background-color:transparent;padding-inline:0}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-input.active{border:none}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-input .select-label{display:flex;gap:4px;align-items:center;font-weight:600;font-size:14px;color:#000000e6}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-options.single-column{height:auto;padding-inline:0;border-radius:12px}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-options.single-column .option-list .option{height:36px;width:192px;padding-inline-start:0;border-radius:0}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-options.single-column .option-list .option .function-icon{margin-inline:16px 4px}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-options.single-column .option-list .option .function-label{flex:1;font-size:14px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.translate-window-header .header-left .translate-type-select-container[data-v-2ffd00cb] .select-options.single-column .option-list .option .selected-icon{justify-content:flex-end;margin-inline:6px 10px}.translate-window-header .header-left .empty-area[data-v-2ffd00cb]{flex:1}.translate-window-header .header-left .language-select[data-v-2ffd00cb]{cursor:default;width:auto;min-width:0}.translate-window-header .header-left .language-select[data-v-2ffd00cb] .select-input{gap:8px;border:none}.translate-window-header .header-left .model-select[data-v-2ffd00cb]{cursor:default;width:52px}.translate-window-header .header-left .model-select[data-v-2ffd00cb] .select-input{border:none}[dir=ltr] .translate-window-header .header-left .model-select[data-v-2ffd00cb] .select-input .select-icon.service-icon{margin-right:8px}[dir=rtl] .translate-window-header .header-left .model-select[data-v-2ffd00cb] .select-input .select-icon.service-icon{margin-left:8px}.translate-window-header .header-right[data-v-2ffd00cb]{display:flex;align-items:center;cursor:default}.translate-window-header .header-right .window-action[data-v-2ffd00cb]{display:flex;gap:8px;-webkit-user-select:none;user-select:none}[dir=ltr] .translate-window-header .header-right .window-action[data-v-2ffd00cb]{margin-left:12px}[dir=rtl] .translate-window-header .header-right .window-action[data-v-2ffd00cb]{margin-right:12px}.translate-window-header .header-right .window-action .window-action-more-list-container[data-v-2ffd00cb]{z-index:10;display:flex;flex-direction:column;position:absolute;top:100%}.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-content[data-v-2ffd00cb]{margin-top:4px;padding:12px;background:#fff;border:1px solid rgb(224,224,224);border-radius:12px}.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]{cursor:pointer;padding:6px;font-size:14px;border-radius:6px;display:flex;gap:8px;align-items:center}[dir=ltr] .translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]{padding-right:24px}[dir=rtl] .translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]{padding-left:24px}.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]:hover{background:#f0f0f0}.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]:active,.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item[data-v-2ffd00cb]:focus{background:#e0e0e0}.translate-window-header .header-right .window-action .window-action-more-list-container .window-action-more-list-item .window-action-more-list-item-content[data-v-2ffd00cb]{white-space:nowrap}.translate-window-header .header-right .window-action .window-action-icon[data-v-2ffd00cb]{cursor:pointer;width:24px;height:24px;display:flex;padding:4px;border-radius:4px}.translate-window-header .header-right .window-action .window-action-icon[data-v-2ffd00cb]:hover{background:#f0f0f0}.translate-window-header .header-right .window-action .window-action-icon[data-v-2ffd00cb]:active,.translate-window-header .header-right .window-action .window-action-icon[data-v-2ffd00cb]:focus{background:#e0e0e0}.translate-window-header .drag-tip[data-v-2ffd00cb]{position:absolute;top:0;display:none}[dir=ltr] .translate-window-header .drag-tip[data-v-2ffd00cb]{left:50%;transform:translate(-50%)}[dir=rtl] .translate-window-header .drag-tip[data-v-2ffd00cb]{right:50%;transform:translate(50%)}.translate-window-header .select-text-close-second-confirm[data-v-2ffd00cb]{position:absolute;top:calc(100% - 2px)}.translate-window-header:hover .drag-tip[data-v-2ffd00cb]{display:block}[dir=rtl] .to-homepage-icon[data-v-2ffd00cb]{rotate:270deg}.explain-not-support-container[data-v-1d16d2d2]{display:flex;flex-direction:column;justify-content:center;align-items:center;gap:8px;padding-block:24px}.explain-not-support-container .explain-not-support-text[data-v-1d16d2d2]{line-height:16px;font-size:12px;text-align:center;color:#333}.explain-not-support-container .explain-not-support-switch[data-v-1d16d2d2]{display:flex;justify-content:center;align-items:center;cursor:pointer;-webkit-user-select:none;user-select:none;gap:4px}.explain-not-support-container .explain-not-support-switch span[data-v-1d16d2d2]{font-size:12px;color:#2962ff}.translate-window-bottom-loading[data-v-787900e9]{display:flex;align-items:center;justify-content:center}.translate-window-bottom-loading .translate-loading-icon[data-v-787900e9]{animation:rotate 1s linear infinite}.speech-icon-wrapper[data-v-074edb6b]{display:inline-block}.speech-icon-wrapper.weakened-color .speech-icon-button[data-v-074edb6b]{opacity:.7}.speech-options-fixed[data-v-074edb6b]{position:fixed;z-index:1;display:flex;flex-direction:column;min-width:120px;background-color:transparent}.speech-options-fixed .option-list[data-v-074edb6b]{display:flex;flex-direction:column;padding:8px 0;background-color:#fff;border:1px solid rgb(224,224,224);border-radius:8px;box-shadow:0 12px 32px #00000029}.speech-options-fixed .option-list .option[data-v-074edb6b]{position:relative;display:flex;align-items:center;min-width:100px;height:36px;padding:0 12px;cursor:pointer;font-size:14px;color:#000}.speech-options-fixed .option-list .option .option-text[data-v-074edb6b]{color:#000000e6}.speech-options-fixed .option-list .option[data-v-074edb6b]:hover{background-color:#f0f0f0}.speech-options-fixed .option-list .option.selected .option-text[data-v-074edb6b]{font-weight:500;color:#2962ff}.speech-icon-button[data-v-074edb6b] .icon-button{display:flex;align-items:center;justify-content:center}.speech-icon-button[data-v-074edb6b] .icon-button .icon{width:20px!important;height:20px!important}.speech-icon-button.speech-icon-button-loading[data-v-074edb6b] .icon-button .icon{animation:rotate-with-scale-074edb6b 1s linear infinite}.speech-icon-button.speech-icon-button-stop[data-v-074edb6b] .icon-button .icon{transform:scale(.9)}@keyframes rotate-with-scale-074edb6b{0%{transform:rotate(0)}to{transform:rotate(360deg)}}.translate-window-result-footer[data-v-c3f95a1f]{height:24px;display:flex;gap:24px;padding:0 16px;margin-block:4px 12px;align-items:center;justify-content:space-between;position:relative;overflow:visible}.translate-window-result-footer.weakened-and-narrower[data-v-c3f95a1f]{margin-top:0}.translate-window-result-footer.weakened-and-narrower .translate-result-footer-icons .translate-result-icon-container .translate-result-icon-wrapper[data-v-c3f95a1f]{opacity:.7}.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f]{margin-inline-start:-6px}.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input{border:none;border-radius:0;padding-inline-end:0;background-color:transparent;height:28px;gap:4px}.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input .select-arrow{display:flex;align-items:center;justify-content:center;margin-inline-end:4px}.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input.active,.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input:active{background-color:#f0f0f0;border-radius:8px}[dir=ltr] .translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input.active .select-arrow,[dir=ltr] .translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input:active .select-arrow{transform:rotate(180deg)}[dir=rtl] .translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input.active .select-arrow,[dir=rtl] .translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input:active .select-arrow{transform:rotate(-180deg)}.translate-window-result-footer .translate-window-result-footer-language-select[data-v-c3f95a1f] .select-input:hover{background-color:#f0f0f0;border-radius:8px}.translate-window-result-footer .empty-area[data-v-c3f95a1f]{flex:1}.translate-window-result-footer .translate-result-footer-icons[data-v-c3f95a1f]{display:flex;gap:8px}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-container[data-v-c3f95a1f]{position:relative;overflow:visible}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper[data-v-c3f95a1f]{display:flex;align-items:center;justify-content:center;cursor:pointer;-webkit-user-select:none;user-select:none;gap:4px;padding:4px;height:24px}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper[data-v-c3f95a1f]:hover{background:#f0f0f0;border-radius:4px}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper.active[data-v-c3f95a1f],.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper[data-v-c3f95a1f]:active,.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper[data-v-c3f95a1f]:focus{background:#e0e0e0}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-wrapper[data-v-c3f95a1f]:not(.show-label){width:24px}.translate-window-result-footer .translate-result-footer-icons .translate-result-icon-tip[data-v-c3f95a1f]{font-size:12px;font-weight:400;color:#000000e6}.translate-window-result-footer .translate-result-footer-icons .red-hot[data-v-c3f95a1f]{position:absolute;top:2px;width:4px;height:4px;border-radius:50%;background:#ff6c52}[dir=ltr] .translate-window-result-footer .translate-result-footer-icons .red-hot[data-v-c3f95a1f]{left:20px}[dir=rtl] .translate-window-result-footer .translate-result-footer-icons .red-hot[data-v-c3f95a1f]{right:20px}.translate-window-result-footer .translate-result-hover-tip[data-v-c3f95a1f]{position:fixed;height:32px;padding:8px 12px;border-radius:6px;background:#353b39cc;color:#fff;font-size:12px;font-weight:400;white-space:nowrap;pointer-events:none;z-index:1000}.translate-window-result-footer .translate-result-hover-tip.with-icon[data-v-c3f95a1f]{display:flex;align-items:center;justify-content:center;gap:4px}.translate-window-result-footer .translate-result-hover-tip .tip-icon[data-v-c3f95a1f]{flex-shrink:0}.translate-window-result-footer .translate-result-hover-tip .tip-text[data-v-c3f95a1f]{line-height:15px;height:15px}.translate-window-result-footer .translate-result-hover-tip .tip-arrow[data-v-c3f95a1f]{position:absolute;bottom:-4px;width:0;height:0;border-left:5px solid transparent;border-right:5px solid transparent;border-top:4px solid rgba(53,59,57,.8)}[dir=ltr] .translate-window-result-footer .translate-result-hover-tip .tip-arrow[data-v-c3f95a1f]{transform:translate(-5px)}[dir=rtl] .translate-window-result-footer .translate-result-hover-tip .tip-arrow[data-v-c3f95a1f]{transform:translate(5px)}.slow-fade-in-enter-active[data-v-c3f95a1f],.slow-fade-in-leave-active[data-v-c3f95a1f]{transition:opacity .15s ease}.slow-fade-in-enter-from[data-v-c3f95a1f],.slow-fade-in-leave-to[data-v-c3f95a1f]{opacity:0}.translate-window-result-container[data-v-02afd352]{padding:12px 16px;font-size:14px;font-weight:400;color:#000000e6;line-height:1.75;display:flex;flex-direction:column}.translate-window-result-container.exception-status[data-v-02afd352]{display:flex;justify-content:center;height:100%}.translate-window-result-container.fixed-min-height[data-v-02afd352]{min-height:77px}.translate-window-result-container.retain-height[data-v-02afd352]{flex:1;overflow-y:overlay}.translate-window-result-container .translate-window-result-error-container[data-v-02afd352]{display:flex;flex-direction:column;justify-content:center;align-items:center}.translate-window-result-container .translate-window-result-error[data-v-02afd352]{align-items:center;font-size:14px;line-height:1.75;gap:4px;font-weight:400;max-width:293px;text-align:center;color:#000000e6}.translate-window-result-container .translate-window-result-error .translate-result-error-retry[data-v-02afd352]{display:flex;align-items:center;word-break:keep-all;gap:2px;color:#2962ff;cursor:pointer;-webkit-user-select:none;user-select:none}.translate-window-result-container .upgrade-now-wrapper[data-v-02afd352]{display:flex;justify-content:center;margin-top:16px}.translate-window-result-container .upgrade-now-wrapper .upgrade-now-btn[data-v-02afd352]{background:radial-gradient(67.24% 88.54% at 52.67% 100%,#5adeff,#2986ff);border-radius:8px;padding:12px 16px;color:#fff;font-size:14px;line-height:16px;font-weight:600;cursor:pointer;-webkit-user-select:none;user-select:none}.translate-window-result-container .translate-window-result-text-wrapper[data-v-02afd352]{display:flex;flex-direction:row;flex:1;min-height:0}.translate-window-result-container .translate-window-result-text-wrapper .translate-window-result-text[data-v-02afd352]{white-space:pre-line;max-width:100%}.translate-window-result-container .translate-window-result-text-wrapper.text-can-be-collapsed .translate-window-result-text[data-v-02afd352]{flex:1;font-size:14px;line-height:1.75;color:#0009}.translate-window-result-container .translate-window-result-text-wrapper.text-can-be-collapsed .translate-window-result-text.collapsed-in-two-lines[data-v-02afd352]{color:#0006;display:-webkit-box;overflow:hidden;text-overflow:ellipsis;-webkit-line-clamp:2;-webkit-box-orient:vertical}.translate-window-result-container .translate-window-result-text-wrapper.text-can-be-collapsed .collapse-bottom-icon[data-v-02afd352]{cursor:pointer}.explain-disable-tips[data-v-02afd352]{position:absolute;bottom:-50px;font-size:12px;padding:12px;line-height:16px;color:#333;background:#fff;border:1px solid rgb(224,224,224);box-shadow:0 12px 32px #00000014;border-radius:8px}[dir=ltr] .explain-disable-tips[data-v-02afd352]{left:36px}[dir=rtl] .explain-disable-tips[data-v-02afd352]{right:36px}.translate-window-up-bottom-result-wrapper[data-v-b96c7970]{display:flex;flex-direction:column;min-height:0;flex:1}.translate-window-up-bottom-result-wrapper>.translate-window-result-footer[data-v-b96c7970]{flex-shrink:0}.translate-window-up-bottom-result-scroll-content[data-v-b96c7970]{display:flex;flex-direction:column;flex:1;overflow-y:auto;min-height:0}[dir=ltr] .translate-window-up-bottom-result-scroll-content[data-v-b96c7970]{margin-right:2px}[dir=rtl] .translate-window-up-bottom-result-scroll-content[data-v-b96c7970]{margin-left:2px}.translate-window-up-bottom-result-scroll-content[data-v-b96c7970]::-webkit-scrollbar{width:6px}.translate-window-up-bottom-result-scroll-content[data-v-b96c7970]::-webkit-scrollbar-thumb{background-color:#0003;border-radius:3px}.translate-window-up-bottom-result-scroll-content[data-v-b96c7970]::-webkit-scrollbar-thumb:hover{background-color:#0000004d}.translate-window-up-bottom-result-scroll-content[data-v-b96c7970]::-webkit-scrollbar-track{background-color:transparent}.translate-window-bottom-result-wrapper[data-v-b96c7970]{flex:1;position:relative}.translate-window-bottom-result-wrapper[data-v-b96c7970]:before{content:"";position:absolute;top:0;left:16px;right:16px;height:1px;background-color:#0d0d0d1f}.bottom-sentinel[data-v-b96c7970]{height:1px;width:100%;pointer-events:none}.translate-window-container[data-v-0f5409bb]{position:fixed;display:flex;z-index:2147483647;border-radius:12px;max-height:calc(100vh - 16px);background-color:#fff;border:1px solid rgba(13,13,13,.12);box-shadow:0 12px 32px #0d0d0d14;font-size:16px}.translate-window-container .translate-window-drag-zone[data-v-0f5409bb]{background:#f7f7f7;width:12px;display:flex;align-items:center;justify-content:center;cursor:move}[dir=ltr] .translate-window-container .translate-window-drag-zone[data-v-0f5409bb]{border-top-left-radius:12px;border-bottom-left-radius:12px}[dir=rtl] .translate-window-container .translate-window-drag-zone[data-v-0f5409bb]{border-top-right-radius:12px;border-bottom-right-radius:12px}.translate-window-container .translate-window-content-zone[data-v-0f5409bb]{flex:1;width:calc(100% - 12px);display:flex;flex-direction:column;word-break:normal;overflow-wrap:break-word;min-height:0}.translate-window-container .translate-window-header-wrapper[data-v-0f5409bb]{flex-shrink:0}.google-docs-setting-container[data-v-9d036124]{position:fixed;height:60px;width:50px;z-index:1000000009}[dir=ltr] .google-docs-setting-container[data-v-9d036124]{padding-right:8px}[dir=rtl] .google-docs-setting-container[data-v-9d036124]{padding-left:8px}.google-docs-setting-btn[data-v-9d036124]{height:100%;width:50px;display:flex;align-items:center;justify-content:center}.google-docs-welcome-banner[data-v-9d036124]{position:absolute;top:100%;min-width:360px;background-color:#fff;border:1px solid rgb(224,224,224);border-radius:16px;z-index:2147483647;box-shadow:0 12px 32px #00000014}[dir=ltr] .google-docs-welcome-banner[data-v-9d036124]{text-align:left}[dir=rtl] .google-docs-welcome-banner[data-v-9d036124]{text-align:right}.banner-content[data-v-9d036124]{padding:20px}.header-section[data-v-9d036124]{position:relative;display:flex;align-items:center;margin-bottom:16px}.title[data-v-9d036124]{flex:1;font-size:14px;font-weight:600;line-height:24px;color:#000000e6}[dir=ltr] .title[data-v-9d036124]{margin-left:6px}[dir=rtl] .title[data-v-9d036124]{margin-right:6px}[dir=ltr] .close-button[data-v-9d036124]{margin-left:4px}[dir=rtl] .close-button[data-v-9d036124]{margin-right:4px}.feature-item[data-v-9d036124]{display:flex;align-items:center;margin-bottom:10px;gap:6px}.feature-item[data-v-9d036124]:last-child{margin-bottom:0}.feature-text[data-v-9d036124]{flex:1;font-size:14px;font-weight:400;color:#0009}.separator[data-v-9d036124]{width:100%;height:1px;background-color:#0000001a}.bottom-section[data-v-9d036124]{display:flex;align-items:center;justify-content:space-between;padding:16px 20px}.enable-text[data-v-9d036124]{font-size:14px;font-weight:400;color:#000000e6}.google-docs-setting-btn-red-hot[data-v-9d036124]{position:absolute;top:15px;width:4px;height:4px;border-radius:50%;background:#ff6c52}[dir=ltr] .google-docs-setting-btn-red-hot[data-v-9d036124]{right:10px}[dir=rtl] .google-docs-setting-btn-red-hot[data-v-9d036124]{left:10px}.input-translate-ball-container[data-v-360a8ea0]{position:fixed;z-index:2147483647;pointer-events:none}.input-translate-ball-container .input-translate-ball-content[data-v-360a8ea0]{position:absolute;bottom:0;pointer-events:all;overflow:hidden;padding:2px;width:var(--6344a9e8);height:var(--99c2986e);transition:width .2s ease;border-radius:24px;background:#fff;border:1px solid rgba(46,50,60,.1);box-shadow:0 10px 16px #00000014;white-space:nowrap}[dir=ltr] .input-translate-ball-container .input-translate-ball-content[data-v-360a8ea0]{right:0}[dir=rtl] .input-translate-ball-container .input-translate-ball-content[data-v-360a8ea0]{left:0}.input-translate-ball-container .input-translate-ball-content.ball-content-small[data-v-360a8ea0]{border:none;box-shadow:none;background:transparent}.input-translate-ball-container .input-translate-ball-content.translating[data-v-360a8ea0]{width:var(--e80239e6)}.input-translate-ball-container .input-translate-ball-content .input-translate-ball-small-icon[data-v-360a8ea0]{width:10px;height:10px;background:#353842;border:1px solid rgb(255,255,255);position:absolute;top:11px;border-radius:50%}.input-translate-ball-container .input-translate-ball-content .translateIcon[data-v-360a8ea0]{position:relative;display:inline-flex;justify-content:center;align-items:center;cursor:pointer;width:28px;height:28px;border-radius:14px;background:#353842}.input-translate-ball-container .input-translate-ball-content .translateIcon[data-v-360a8ea0]:hover{background:#353842}.input-translate-ball-container .input-translate-ball-content .translateIcon[data-v-360a8ea0]:active{opacity:1;background:#212329}.input-translate-ball-container .input-translate-ball-content .translateIcon.translating[data-v-360a8ea0]{display:flex}.input-translate-ball-container .input-translate-ball-content .translateIcon .translate-loading-icon[data-v-360a8ea0]{animation:rotate 1s linear infinite;display:inline-flex;align-items:center;justify-content:center;line-height:0;overflow:hidden}.input-translate-ball-container .input-translate-ball-content .translateIcon .translate-loading-icon[data-v-360a8ea0] .svg{width:100%;height:100%;display:block}.input-translate-ball-container .input-translate-ball-content .otherIcons[data-v-360a8ea0]{display:inline-flex;transition:opacity .2s ease}.input-translate-ball-container .input-translate-ball-content .otherIcons[data-v-360a8ea0] .icon-button{padding:3px;border-radius:14px}.input-translate-ball-container .input-translate-ball-content .otherIcons .always-close-icon-button[data-v-360a8ea0] .icon-button .svg-icon{transform:translateY(1px)}.input-translate-ball-container .input-translate-ball-content.hover[data-v-360a8ea0]{width:var(--37e28ee6)}.input-translate-ball-container .input-translate-ball-popup-container[data-v-360a8ea0]{pointer-events:all}.input-translate-ball-container .input-translate-ball-popup-container .input-translate-ball-popup[data-v-360a8ea0]{position:absolute}[dir=ltr] .input-translate-ball-container .input-translate-ball-popup-container .input-translate-ball-popup[data-v-360a8ea0]{right:0}[dir=rtl] .input-translate-ball-container .input-translate-ball-popup-container .input-translate-ball-popup[data-v-360a8ea0]{left:0}.input-translate-ball-container.vertical .input-translate-ball-content[data-v-360a8ea0]{top:0;bottom:auto;height:var(--6344a9e8);width:var(--99c2986e);transition:height .2s ease}.input-translate-ball-container.vertical .input-translate-ball-content .otherIcons[data-v-360a8ea0]{display:flex;flex-direction:column;margin-inline-end:0}[dir=ltr] .input-translate-ball-container.vertical .input-translate-ball-content .otherIcons .always-close-icon-button[data-v-360a8ea0] .icon-button .svg-icon{transform:translate(1px)}[dir=rtl] .input-translate-ball-container.vertical .input-translate-ball-content .otherIcons .always-close-icon-button[data-v-360a8ea0] .icon-button .svg-icon{transform:translate(-1px)}.input-translate-ball-container.vertical .input-translate-ball-content.hover[data-v-360a8ea0]{width:var(--99c2986e);height:var(--37e28ee6)}.input-translate-ball-container.vertical .input-translate-ball-tips[data-v-360a8ea0]{white-space:nowrap}.input-translate-ball-tips[data-v-360a8ea0]{position:absolute;z-index:2147483647;-webkit-user-select:none;user-select:none;color:#fff;bottom:40px;font-size:12px;line-height:16px;border-radius:8px;font-weight:400;padding:8px 12px;background-color:#000;border:1px solid rgb(54,54,54);box-shadow:0 12px 32px #00000014}.input-translate-ball-tips.model-tip-label[data-v-360a8ea0]{display:flex}.input-translate-ball-tips.model-tip-label .input-translate-ball-tips-content[data-v-360a8ea0]{display:flex;align-items:center;padding-inline-end:4px}.input-translate-ball-tips.model-tip-label .input-translate-ball-tips-content .input-translate-ball-tips-icon-wrapper[data-v-360a8ea0]{display:inline-block;padding-inline:4px;height:16px}.input-translate-ball-tips.model-tip-label .input-translate-ball-tips-content .input-translate-ball-tips-icon-wrapper .input-translate-ball-tips-icon[data-v-360a8ea0]{display:block;width:16px;height:16px}.input-translate-ball-tips.error-tips[data-v-360a8ea0]{bottom:40px}.pdf-banner-container[data-v-740c4687]{position:absolute;z-index:2147483647;top:0;left:0;right:0;height:50px;padding-left:60px;padding-right:60px;font-size:16px;display:flex;gap:8px;justify-content:center;align-items:center;background-color:#fff;color:#000000e6;line-height:1.5}.pdf-banner-container .pdf-banner-desc[data-v-740c4687]{overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.pdf-banner-container .pdf-translate-button[data-v-740c4687]{height:32px;border-radius:18px;font-size:14px;font-weight:600;overflow:unset;text-overflow:unset}[dir=ltr] .pdf-banner-container .pdf-translate-button[data-v-740c4687]{margin-left:24px}[dir=rtl] .pdf-banner-container .pdf-translate-button[data-v-740c4687]{margin-right:24px}.pdf-banner-container .pdf-translate-close[data-v-740c4687]{position:absolute;width:60px;display:flex;justify-content:center;align-items:center}[dir=ltr] .pdf-banner-container .pdf-translate-close[data-v-740c4687]{right:0}[dir=rtl] .pdf-banner-container .pdf-translate-close[data-v-740c4687]{left:0}.pdf-only-translate-button-container[data-v-740c4687]{position:absolute;z-index:2147483647;top:12px;justify-content:end}.plugin-comment-guid-container[data-v-fef91c63]{position:fixed;z-index:2147483647;bottom:32px;padding:24px;font-weight:400;background-color:#fff;color:#000;border:1px solid rgb(224,224,224);border-radius:16px;box-shadow:0 12px 24px #00000014}[dir=ltr] .plugin-comment-guid-container[data-v-fef91c63]{right:32px}[dir=rtl] .plugin-comment-guid-container[data-v-fef91c63]{left:32px}.plugin-comment-guid-container .plugin-comment-guid-header[data-v-fef91c63]{display:flex;gap:12px;align-items:center;margin-bottom:24px}.plugin-comment-guid-container .plugin-comment-guid-header .plugin-comment-guid-header-logo[data-v-fef91c63]{display:flex;flex:1;align-items:center;gap:12px}.plugin-comment-guid-container .plugin-comment-guid-header .plugin-comment-guid-header-logo .plugin-comment-logo-name[data-v-fef91c63]{font-weight:600;font-size:16px}.plugin-comment-guid-container .plugin-comment-five-star[data-v-fef91c63]{display:flex;flex-direction:column;align-items:center;margin-bottom:8px}.plugin-comment-guid-container .plugin-comment-dec-container[data-v-fef91c63]{display:flex;justify-content:center}.plugin-comment-guid-container .plugin-comment-dec-container .plugin-comment-dec[data-v-fef91c63]{max-width:300px;text-align:center;font-size:14px;line-height:1.5}.plugin-comment-guid-container .plugin-comment-btn-container[data-v-fef91c63]{display:flex;justify-content:center}.plugin-comment-guid-container .plugin-comment-btn-container .plugin-comment-btn[data-v-fef91c63]{width:284px;height:48px;border-radius:12px;margin:32px 8px 8px}.dialog-mask[data-v-eca39056]{position:fixed;top:0;width:100%;height:100%;background:#0009;z-index:2147483646}[dir=ltr] .dialog-mask[data-v-eca39056]{left:0}[dir=rtl] .dialog-mask[data-v-eca39056]{right:0}.confirm-dialog[data-v-eca39056]{position:fixed;top:50%;padding:16px 24px 24px;background:#fff;border-radius:16px;border:1px solid rgb(224,224,224);box-shadow:0 12px 32px #00000014;overflow:hidden;display:flex;flex-direction:column;z-index:2147483647}[dir=ltr] .confirm-dialog[data-v-eca39056]{left:50%;transform:translate(-50%,-50%)}[dir=rtl] .confirm-dialog[data-v-eca39056]{right:50%;transform:translate(50%,-50%)}.dialog-header[data-v-eca39056]{display:flex;align-items:center;justify-content:space-between}.dialog-header .dialog-title[data-v-eca39056]{font-size:14px;font-weight:700;color:#000000e6}.dialog-content[data-v-eca39056]{flex:1;margin-top:12px}.dialog-content .dialog-body[data-v-eca39056]{margin-bottom:24px}.dialog-content .dialog-body p[data-v-eca39056]{margin:0;line-height:1.5;color:#0d0d0de6;font-size:14px}.dialog-content .dialog-actions[data-v-eca39056]{display:flex;justify-content:flex-end;gap:12px}.dialog-content .dialog-actions .btn-cancel[data-v-eca39056]{background:#0d0d0d1a;border-radius:8px;padding:8px 12px;color:#0d0d0de6;font-size:12px;font-weight:600;cursor:pointer;-webkit-user-select:none;user-select:none;transition:background-color .2s}.dialog-content .dialog-actions .btn-cancel[data-v-eca39056]:hover{background:#0d0d0d26}.dialog-content .dialog-actions .colorful-confirm-btn[data-v-eca39056]{background:radial-gradient(67.24% 88.54% at 52.67% 100%,#5adeff,#2986ff);color:#fff;font-size:12px;font-weight:600}.dialog-content .dialog-actions .colorful-confirm-btn[data-v-eca39056]:hover{opacity:.9}.upgrade-dialog-overlay[data-v-74241f0c]{position:fixed;top:0;left:0;right:0;bottom:0;background:transparent;display:flex;align-items:flex-start;justify-content:flex-start;z-index:2147483647;overflow:auto;padding:20px}.upgrade-dialog-overlay.with-mask[data-v-74241f0c]{background:#0009}.upgrade-dialog[data-v-74241f0c]{position:relative;height:480px;background:#fff;border-radius:24px;box-shadow:0 12px 32px #00000014;margin:auto}.dialog-close[data-v-74241f0c]{width:16px;height:16px;position:absolute;cursor:pointer;background-repeat:no-repeat;background-position:center;background-size:contain}[dir=ltr] .dialog-close[data-v-74241f0c]{right:-20px}[dir=rtl] .dialog-close[data-v-74241f0c]{left:-20px}.dialog-content[data-v-74241f0c]{display:flex;height:100%}.content-left[data-v-74241f0c]{width:456px;padding:48px;display:flex;flex-direction:column;justify-content:center}.dialog-title[data-v-74241f0c]{font-size:20px;font-weight:600;margin-bottom:24px;color:#000}.features-list[data-v-74241f0c]{display:flex;flex-direction:column;gap:12px;margin-bottom:60px}.feature-item[data-v-74241f0c]{display:flex;align-items:center;gap:8px}.check-icon[data-v-74241f0c]{color:#2962ff;flex-shrink:0}.feature-text[data-v-74241f0c]{font-size:14px;font-weight:500;line-height:1.5;color:#000}.feature-text.highlight[data-v-74241f0c]{color:#2962ff}.upgrade-button[data-v-74241f0c]{font-weight:500;font-size:16px;height:48px;display:flex;align-items:center;justify-content:center;border-radius:12px;cursor:pointer;color:#fff;background:radial-gradient(67.24% 88.54% at 52.67% 100%,#5adeff,#2986ff)}.content-right[data-v-74241f0c]{display:flex;align-items:center;justify-content:center}.upgrade-image[data-v-74241f0c]{width:480px;height:100%;background-repeat:no-repeat;background-position:center;background-size:contain}.word-translate-bubble[data-v-eaaa630d]{position:absolute;display:flex;align-items:center;justify-content:center;border-radius:4px;gap:2px;height:28px;padding-right:6px;padding-left:6px;background:#f7f7f7;z-index:2147483647;border:.5px solid rgb(207,207,207);box-shadow:0 6px 12px #00000014;color:#333;font-size:14px;-webkit-user-select:none;user-select:none;cursor:pointer}.word-translate-bubble .translate-text-sharp-angle[data-v-eaaa630d]{position:absolute;width:4px;height:4px;background:#f7f7f7;border:.5px solid rgb(207,207,207);box-shadow:0 6px 12px #00000014}[dir=ltr] .word-translate-bubble .translate-text-sharp-angle[data-v-eaaa630d]{transform:rotate(45deg)}[dir=rtl] .word-translate-bubble .translate-text-sharp-angle[data-v-eaaa630d]{transform:rotate(-45deg)}.word-translate-bubble .translate-text-sharp-angle.sharp-top[data-v-eaaa630d]{top:-2px;inset-inline-start:10px;border-bottom:none!important}[dir=ltr] .word-translate-bubble .translate-text-sharp-angle.sharp-top[data-v-eaaa630d]{border-right:none!important}[dir=rtl] .word-translate-bubble .translate-text-sharp-angle.sharp-top[data-v-eaaa630d]{border-left:none!important}.word-translate-bubble .translate-text-sharp-angle.sharp-bottom[data-v-eaaa630d]{bottom:-2px;border-top:none!important;inset-inline-end:10px}[dir=ltr] .word-translate-bubble .translate-text-sharp-angle.sharp-bottom[data-v-eaaa630d]{border-left:none!important}[dir=rtl] .word-translate-bubble .translate-text-sharp-angle.sharp-bottom[data-v-eaaa630d]{border-right:none!important}.word-translate-bubble.black-theme[data-v-eaaa630d]{background:#000;color:#fff;border:.5px solid rgb(54,54,54)}.word-translate-bubble.black-theme .translate-text-sharp-angle[data-v-eaaa630d]{background:#000;border:.5px solid rgb(54,54,54)}[dir=rtl] .word-translate-bubble .translate-text-sharp-angle.sharp-top[data-v-eaaa630d]{inset-inline-end:10px;inset-inline-start:unset}[dir=rtl] .word-translate-bubble .translate-text-sharp-angle.sharp-bottom[data-v-eaaa630d]{inset-inline-start:10px;inset-inline-end:unset}.mail-setting-container[data-v-e5740f48]{position:relative}.mail-setting-btn[data-v-e5740f48]{height:40px;width:50px;display:flex;align-items:center;justify-content:center}.mail-welcome-banner[data-v-e5740f48]{position:absolute;top:100%;min-width:360px;background-color:#fff;border:1px solid rgb(224,224,224);border-radius:16px;z-index:2147483647;box-shadow:0 12px 32px #00000014}.banner-content[data-v-e5740f48]{padding:20px}.header-section[data-v-e5740f48]{position:relative;display:flex;margin-bottom:16px}.title[data-v-e5740f48]{flex:1;font-size:14px;font-weight:600;line-height:24px;color:#000000e6}[dir=ltr] .title[data-v-e5740f48]{margin-left:6px}[dir=rtl] .title[data-v-e5740f48]{margin-right:6px}[dir=ltr] .close-button[data-v-e5740f48]{margin-left:4px}[dir=rtl] .close-button[data-v-e5740f48]{margin-right:4px}.feature-item[data-v-e5740f48]{display:flex;align-items:center;margin-bottom:10px;gap:6px}.feature-item[data-v-e5740f48]:last-child{margin-bottom:0}.feature-text[data-v-e5740f48]{flex:1;font-size:14px;font-weight:400;color:#0009}.separator[data-v-e5740f48]{width:100%;height:1px;background-color:#0000001a}.bottom-section[data-v-e5740f48]{display:flex;align-items:center;justify-content:space-between;padding:16px 20px}.enable-text[data-v-e5740f48]{font-size:14px;font-weight:400;color:#000000e6}.mail-setting-btn-red-hot[data-v-e5740f48]{position:absolute;top:8px;width:4px;height:4px;border-radius:50%;background:#ff6c52}[dir=ltr] .mail-setting-btn-red-hot[data-v-e5740f48]{right:8px}[dir=rtl] .mail-setting-btn-red-hot[data-v-e5740f48]{left:8px}[data-v-17b61cdd] .base-select .select-options .option-list .option{min-width:260px}.mail-translate-banner-container[data-v-17b61cdd]{position:relative;font-size:14px;font-weight:400;-webkit-user-select:none;user-select:none;padding-bottom:10px}.translate-btn[data-v-17b61cdd]{width:fit-content;display:inline-flex;vertical-align:middle;margin-top:4px;min-width:220px;position:relative;align-items:center;height:40px;cursor:pointer}[dir=ltr] .translate-btn[data-v-17b61cdd]{text-align:left;margin-right:8px}[dir=rtl] .translate-btn[data-v-17b61cdd]{text-align:right;margin-left:8px}.translate-btn .logo-container[data-v-17b61cdd]{flex:1;display:flex;height:100%;gap:8px;align-items:center;justify-content:center;border:1px solid rgb(224,224,224)}[dir=ltr] .translate-btn .logo-container[data-v-17b61cdd]{padding-left:8px;padding-right:16px;border-top-left-radius:48px;border-bottom-left-radius:48px}[dir=rtl] .translate-btn .logo-container[data-v-17b61cdd]{padding-right:8px;padding-left:16px;border-top-right-radius:48px;border-bottom-right-radius:48px}.translate-btn .logo-container .logo[data-v-17b61cdd]{width:24px;height:24px;display:flex;align-items:center;justify-content:center;background-color:#2962ff;border-radius:50%}.translate-btn .logo-container .text-content[data-v-17b61cdd]{flex:1;font-weight:600;color:#2962ff;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.translate-btn .logo-container[data-v-17b61cdd]:hover{background-color:#f0f0f0}.translate-btn .logo-container[data-v-17b61cdd]:active,.translate-btn .logo-container.active[data-v-17b61cdd]{background-color:#e0e0e0}.translate-btn .setting-container[data-v-17b61cdd]{display:flex;width:44px;height:100%;align-items:center;justify-content:center;border:1px solid rgb(224,224,224)}[dir=ltr] .translate-btn .setting-container[data-v-17b61cdd]{border-left:none;border-top-right-radius:48px;border-bottom-right-radius:48px}[dir=rtl] .translate-btn .setting-container[data-v-17b61cdd]{border-right:none;border-top-left-radius:48px;border-bottom-left-radius:48px}.translate-btn .setting-container[data-v-17b61cdd]:hover{background-color:#f0f0f0}.translate-btn .setting-container[data-v-17b61cdd]:active,.translate-btn .setting-container.active[data-v-17b61cdd]{background-color:#e0e0e0}.translate-btn .translate-setting-container[data-v-17b61cdd]{position:absolute;top:calc(100% + 8px);z-index:1}[dir=ltr] .translate-btn .translate-setting-container[data-v-17b61cdd]{right:0}[dir=rtl] .translate-btn .translate-setting-container[data-v-17b61cdd]{left:0}.translate-btn .exceed-limit-tip[data-v-17b61cdd]{position:absolute;z-index:1;width:270px;top:calc(100% + 8px)}[dir=ltr] .translate-btn .exceed-limit-tip[data-v-17b61cdd]{right:50%;transform:translate(50%)}[dir=rtl] .translate-btn .exceed-limit-tip[data-v-17b61cdd]{left:50%;transform:translate(-50%)}.send-email-btn[data-v-17b61cdd]{display:inline-flex;vertical-align:middle;width:fit-content;gap:4px;height:40px;margin-top:4px;padding:0 16px;cursor:pointer;align-items:center;border:1px solid rgb(224,224,224);border-radius:48px}[dir=ltr] .send-email-btn[data-v-17b61cdd]{text-align:left;margin-right:8px}[dir=rtl] .send-email-btn[data-v-17b61cdd]{text-align:right;margin-left:8px}.send-email-btn[data-v-17b61cdd]:hover{background-color:#f0f0f0}.send-email-btn[data-v-17b61cdd]:active,.send-email-btn.active[data-v-17b61cdd]{background-color:#e0e0e0}.send-email-btn .send-mail-icon[data-v-17b61cdd]{opacity:.9}.send-email-btn .send-text-content[data-v-17b61cdd]{color:#000;opacity:.9;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.btn-disabled[data-v-17b61cdd]{opacity:.5;cursor:not-allowed}.btn-disabled[data-v-17b61cdd]:hover,.btn-disabled[data-v-17b61cdd]:active,.btn-disabled.active[data-v-17b61cdd]{background-color:transparent!important}@media (max-width: 730px){.mail-translate-banner-container[data-v-17b61cdd]{display:flex;flex-direction:column}}.caption-window-container[data-v-d1944dd0]{position:absolute;width:100%;top:0;pointer-events:none;z-index:10;font-size:16px;color:#ffffffe6;font-weight:400;line-height:150%;transition:bottom .1s ease-in-out}[dir=ltr] .caption-window-container[data-v-d1944dd0]{left:0}[dir=rtl] .caption-window-container[data-v-d1944dd0]{right:0}.caption-window-content[data-v-d1944dd0]{position:absolute;left:40px;right:40px;bottom:5px;display:flex;flex-direction:column;align-items:center}.caption-window-text[data-v-d1944dd0]{background-color:#000000bf;padding:2px 8px;white-space:pre-wrap;display:none}.subtitle-guide-dialog-container[data-v-e6e519b9]{max-width:400px;min-width:320px;width:max-content;white-space:normal;background:#fff;border:1px solid rgb(224,224,224);border-radius:16px;box-shadow:0 12px 32px #00000014;padding:20px 24px 24px;box-sizing:border-box;display:flex;flex-direction:column;text-shadow:none;font-size:14px}.subtitle-guide-dialog-container .dialog-title[data-v-e6e519b9]{color:#000000e6;font-weight:600;line-height:20px;margin-bottom:8px}.subtitle-guide-dialog-container .dialog-description[data-v-e6e519b9]{color:#0009;margin-bottom:20px}.subtitle-guide-dialog-container .dialog-actions[data-v-e6e519b9]{display:flex;gap:8px;justify-content:end}.subtitle-guide-dialog-container .got-it-button[data-v-e6e519b9]{height:40px;padding-left:16px;padding-right:16px;font-weight:600}.subtitle-guide-dialog-container .explore-button[data-v-e6e519b9]{height:40px;font-weight:600}.subtitle-icon[data-v-64fd24a9]{display:inline-flex;align-items:center;justify-content:center}.menu-cell[data-v-de94c478]{display:flex;align-items:center;justify-content:space-between;min-height:48px;padding:0 24px}.menu-cell[data-v-de94c478]:hover{background-color:#ffffff1a}.menu-cell.disabled[data-v-de94c478]:hover{background-color:transparent}.menu-cell .menu-cell-left[data-v-de94c478]{display:flex;align-items:center;gap:8px;flex:1}.menu-cell .menu-cell-right[data-v-de94c478]{display:flex;align-items:center;gap:4px}.menu-container[data-v-20d5d8e7]{display:flex;flex-direction:column;background-color:#000c;border:1px solid rgba(255,255,255,.2);border-radius:8px;padding:8px 0;box-shadow:0 2px 4px #0000004d}.menu-divider[data-v-f1c6b8bc]{height:1px;background-color:#fff3;margin:2px 24px}.select-list-item[data-v-cab79358]{display:flex;gap:8px;align-items:center;height:48px;padding:0 24px}.select-list-item[data-v-cab79358]:hover{background-color:#ffffff1a}.menu-header[data-v-4535d3fb]{display:flex;align-items:center;gap:8px;height:48px;padding:0 24px;overflow:hidden}.menu-header .menu-header-title[data-v-4535d3fb]{font-weight:700}.service-list-container[data-v-11d9fc6d]{flex:1;overflow:auto}.group-title[data-v-11d9fc6d]{padding:0 24px;display:flex;gap:8px;margin-top:16px;margin-bottom:8px;align-items:center}.group-title .group-title-text[data-v-11d9fc6d]{font-size:12px;color:#fff9;font-weight:600}.service-item[data-v-11d9fc6d]{display:flex;align-items:center;gap:8px;flex:1}.service-desc[data-v-11d9fc6d]{font-size:12px;color:#fff9}.upgrade-prompt-card[data-v-b253b8d0]{position:relative;white-space:normal;padding:20px 24px 24px;text-shadow:none;min-width:360px;background:#fff;border:1px solid rgb(224,224,224);border-radius:16px;box-shadow:0 12px 24px #00000014;cursor:default}.upgrade-prompt-card .close-button[data-v-b253b8d0]{position:absolute;top:18px;cursor:pointer}[dir=ltr] .upgrade-prompt-card .close-button[data-v-b253b8d0]{right:18px}[dir=rtl] .upgrade-prompt-card .close-button[data-v-b253b8d0]{left:18px}.upgrade-prompt-card .title[data-v-b253b8d0]{margin-bottom:16px;font-size:14px;font-weight:600;color:#000000e6}.upgrade-prompt-card .promo-section[data-v-b253b8d0]{display:flex;align-items:flex-start;gap:12px;margin-bottom:20px}.upgrade-prompt-card .gift-icon[data-v-b253b8d0]{width:28px;height:28px;flex-shrink:0}.upgrade-prompt-card .promo-text[data-v-b253b8d0]{flex:1;font-size:14px;color:#000000e6}.upgrade-prompt-card .promo-color-text[data-v-b253b8d0]{color:#ff851a;font-weight:600}.upgrade-prompt-card .button-group[data-v-b253b8d0]{display:flex;gap:12px;justify-content:end}.upgrade-prompt-card .skip-button[data-v-b253b8d0],.upgrade-prompt-card .participate-button[data-v-b253b8d0]{height:40px;font-weight:600;padding:12px}.try-ai-model-tip-wrapper[data-v-eda2ac46]{min-width:260px;max-width:300px;width:max-content;white-space:normal;position:relative;border-radius:8px;box-shadow:0 12px 32px #0d0d0d14;text-shadow:none}.try-ai-model-tip-wrapper .try-ai-model-tip-bg[data-v-eda2ac46]{position:absolute;z-index:0;top:0;bottom:0;border-radius:inherit}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip-bg[data-v-eda2ac46]{left:0;right:0;background:linear-gradient(90deg,#47c8ff,#2962ff)}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip-bg[data-v-eda2ac46]{right:0;left:0;background:linear-gradient(-90deg,#47c8ff,#2962ff)}.try-ai-model-tip-wrapper .try-ai-model-tip[data-v-eda2ac46]{position:relative;font-size:12px;line-height:1.5;border-radius:inherit;border:1px solid transparent;background-color:#fff;background-clip:padding-box}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip[data-v-eda2ac46]{padding:12px 34px 12px 16px}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip[data-v-eda2ac46]{padding:12px 16px 12px 34px}.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .tip-text[data-v-eda2ac46]{color:#333}.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]{-webkit-text-fill-color:transparent;color:transparent;font-weight:600;font-size:12px;cursor:pointer;position:relative;display:inline-block}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]{background:linear-gradient(90deg,#2962ff,#47c8ff)}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]{background:linear-gradient(-90deg,#2962ff,#47c8ff)}[dir] .try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]{-webkit-background-clip:text;background-clip:text}.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]:after{content:"";position:absolute;bottom:0;width:100%;height:1px}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]:after{left:0;background:linear-gradient(90deg,#2962ff,#47c8ff)}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]:after{right:0;background:linear-gradient(-90deg,#2962ff,#47c8ff)}.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]:hover{opacity:.8}.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn[data-v-eda2ac46]:active,.try-ai-model-tip-wrapper .try-ai-model-tip .tip-content .try-text-btn.active[data-v-eda2ac46]{opacity:1}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow[data-v-eda2ac46]{position:absolute;width:0;height:0}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow[data-v-eda2ac46]:after{content:"";position:absolute;width:0;height:0}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]{bottom:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-top:5px solid #4a9eff}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]{left:50%;transform:translate(-50%)}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]{right:50%;transform:translate(50%)}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]:after{top:-6px;border-left:5px solid transparent;border-right:5px solid transparent;border-top:4px solid white}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]:after{left:-5px}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-bottom[data-v-eda2ac46]:after{right:-5px}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]{top:-5px;border-left:6px solid transparent;border-right:6px solid transparent;border-bottom:5px solid #4a9eff}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]{left:50%;transform:translate(-50%)}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]{right:50%;transform:translate(50%)}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]:after{bottom:-6px;border-left:5px solid transparent;border-right:5px solid transparent;border-bottom:4px solid white}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]:after{left:-5px}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-top[data-v-eda2ac46]:after{right:-5px}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]{top:50%;transform:translateY(-50%);border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]{right:-5px;border-left:5px solid #4a9eff}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]{left:-5px;border-right:5px solid #4a9eff}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]:after{top:-5px;border-top:5px solid transparent;border-bottom:5px solid transparent}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]:after{left:-6px;border-left:4px solid white}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-right[data-v-eda2ac46]:after{right:-6px;border-right:4px solid white}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]{top:50%;transform:translateY(-50%);border-top:6px solid transparent;border-bottom:6px solid transparent}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]{left:-5px;border-right:5px solid #4a9eff}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]{right:-5px;border-left:5px solid #4a9eff}.try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]:after{top:-5px;border-top:5px solid transparent;border-bottom:5px solid transparent}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]:after{right:-6px;border-right:4px solid white}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .arrow.arrow-left[data-v-eda2ac46]:after{left:-6px;border-left:4px solid white}.try-ai-model-tip-wrapper .try-ai-model-tip .icon-close[data-v-eda2ac46]{position:absolute;top:6px;cursor:pointer}[dir=ltr] .try-ai-model-tip-wrapper .try-ai-model-tip .icon-close[data-v-eda2ac46]{right:6px}[dir=rtl] .try-ai-model-tip-wrapper .try-ai-model-tip .icon-close[data-v-eda2ac46]{left:6px}.quick-button-container[data-v-693b0bf1]{position:relative;margin:0 16px;padding:0;height:100%;cursor:pointer;z-index:2147483647;display:flex;align-items:center;justify-content:center;font-size:16px;white-space:nowrap;font-weight:400;line-height:20px}.quick-button-container .logo-container[data-v-693b0bf1]{position:relative;width:36px;height:36px;display:flex;align-items:center;justify-content:center;cursor:pointer}.quick-button-container .logo-container .logo-outer-border[data-v-693b0bf1]{position:absolute;width:36px;height:36px;border:1px solid rgba(255,255,255,.6);border-radius:10px;display:flex;align-items:center;justify-content:center;transition:opacity .2s ease}.quick-button-container .logo-container .logo-outer-border .logo-inner-border[data-v-693b0bf1]{width:30px;height:30px;border:1px solid rgb(255,255,255);border-radius:7px;display:flex;align-items:center;justify-content:center;transition:opacity .2s ease}.quick-button-container .logo-container .logo-outer-border .logo-inner-border .logo-image[data-v-693b0bf1]{width:24px;height:24px;border-radius:4px}.quick-button-container .logo-container.hide-borders .logo-outer-border[data-v-693b0bf1],.quick-button-container .logo-container.hide-borders .logo-outer-border .logo-inner-border[data-v-693b0bf1]{border-color:transparent}.quick-button-container .subtitle-popup-container[data-v-693b0bf1]{position:absolute;bottom:calc(100% - 4px)}.quick-button-container .subtitle-popup-container.hide-borders[data-v-693b0bf1]{bottom:calc(100% - 8px)}.quick-button-container .exceed-limit-tip[data-v-693b0bf1]{width:300px;text-shadow:none;white-space:normal}.quick-button-container .no-caption-tip[data-v-693b0bf1],.quick-button-container .error-tip[data-v-693b0bf1],.quick-button-container .download-tip[data-v-693b0bf1]{color:#fff;font-size:12px;line-height:16px;border-radius:8px;font-weight:400;padding:8px 12px;background-color:#000000bf;border:1px solid rgba(255,255,255,.1);box-shadow:0 12px 32px #00000040}.quick-button-container .error-tip[data-v-693b0bf1]{display:flex;align-items:center;gap:4px}.quick-button-container .error-tip .error-tip-close[data-v-693b0bf1] svg path{stroke:currentColor;fill:currentColor}.quick-button-container[data-v-693b0bf1] ::-webkit-scrollbar{width:4px}.quick-button-container[data-v-693b0bf1] ::-webkit-scrollbar-thumb{background-color:#afafaf;border-radius:12px}.root[data-v-0c0be04a]{height:0px!important;width:0px!important;font-size:14px;line-height:normal;letter-spacing:normal;cursor:auto;color:initial;font-style:normal;font-weight:400;font-variant:normal;font-stretch:normal;word-spacing:normal;text-transform:none;text-indent:0;text-align:start;text-shadow:none;visibility:visible;white-space:normal}</style><div data-v-0c0be04a="" dir="ltr" id="root" class="root" style="font-family: Inter, Avenir, &quot;Segoe UI&quot;, Helvetica, Arial, Roboto, sans-serif, &quot;PingFang SC&quot;, &quot;Microsoft Yahei&quot;;"><div data-v-8964fea1="" class="hover-ball-container" style="top: 269.667px; right: 1px;"><div data-v-8964fea1="" class="gift-ball-container" style="visibility: hidden;"><div data-v-8964fea1="" class="gift-image" style="background-image: url(&quot;chrome-extension://aopddeflghjljihihabdclejbojaomaf/public/images/gift.png&quot;);"></div></div><div data-v-8964fea1="" class="actionContainer"><div data-v-8964fea1="" class="translateIcon"><div data-v-b348f0a6="" data-v-8964fea1="" class="icon svg-icon" style="width: 20px; height: 20px; background-image: none; rotate: 90deg;"><svg data-v-b348f0a6="" xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="none" viewBox="0 0 20 20" class="svg"><path fill="#fff" fill-rule="evenodd" d="M5.634 2.09c.24-.14.545-.06.681.18l.517.901.036.08h2.194a.5.5 0 0 1 0 1h-.589a15.7 15.7 0 0 1-1.21 2.434q-.232.381-.507.771c.907.993 1.966 2.038 2.923 2.772a.5.5 0 1 1-.608.794c-.98-.752-2.035-1.786-2.935-2.762-.592.704-1.298 1.368-2.125 1.875a.5.5 0 1 1-.522-.852c.76-.466 1.416-1.095 1.972-1.775-.686-.788-1.236-1.49-1.505-1.901a.5.5 0 1 1 .838-.546c.217.333.678.927 1.279 1.625q.177-.262.337-.523c.443-.724.77-1.409.983-1.913H3.125a.5.5 0 1 1 0-1h2.594l-.272-.476a.504.504 0 0 1 .187-.684M3.625 12.813v-.5h-1v3.562a1.5 1.5 0 0 0 1.5 1.5h3.563v-1H4.124a.5.5 0 0 1-.5-.5zm12.75-5.125V4.125a.5.5 0 0 0-.5-.5h-3.562v-1h3.562a1.5 1.5 0 0 1 1.5 1.5v3.563zm-3.683.797c.337-.84 1.528-.837 1.86.006l3.1 7.889a.5.5 0 1 1-.93.366l-1.227-3.12h-3.781l-1.25 3.122a.5.5 0 1 1-.928-.371zm.929.371 1.481 3.77h-2.988z" clip-rule="evenodd"></path></svg></div></div><div data-v-8964fea1="" class="otherIcons"><div data-v-8964fea1="" style="position: relative;"><div data-v-4b3aafaf="" data-v-8964fea1="" style="font-size: 0px; width: 26px; height: 26px;"><div data-v-4b3aafaf="" class="icon-button" aria-disabled="false" style="width: 26px; height: 26px;"><div data-v-b348f0a6="" data-v-4b3aafaf="" class="icon svg-icon" style="width: 18px; height: 18px; background-image: none;"><svg data-v-b348f0a6="" xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="none" viewBox="0 0 20 20" class="svg"><path fill="#696969" fill-rule="evenodd" d="M2.274 10.632a9 9 0 0 1-.325-.628l-.019-.041.02-.041c.068-.15.176-.366.324-.628.297-.524.756-1.223 1.402-1.92 1.289-1.392 3.31-2.77 6.29-2.77 2.982 0 5.002 1.378 6.29 2.77a10.4 10.4 0 0 1 1.403 1.92c.148.262.255.479.325.628l.018.041-.018.041c-.07.15-.177.366-.325.628a10.4 10.4 0 0 1-1.403 1.92c-1.288 1.392-3.308 2.77-6.29 2.77-2.98 0-5.001-1.378-6.29-2.77a10.4 10.4 0 0 1-1.402-1.92m16.739-.85-.466.181.466.181v.002l-.003.005-.006.016-.024.057-.09.201a10 10 0 0 1-.361.7 11.4 11.4 0 0 1-1.539 2.107c-1.424 1.538-3.694 3.09-7.024 3.09s-5.6-1.552-7.023-3.09a11.4 11.4 0 0 1-1.539-2.107 10 10 0 0 1-.452-.901l-.023-.057-.006-.016-.002-.005-.001-.001.466-.182-.466-.181V9.78l.003-.005.006-.016a4 4 0 0 1 .113-.258c.08-.171.199-.412.362-.7.326-.574.828-1.34 1.539-2.107 1.424-1.538 3.694-3.09 7.023-3.09 3.33 0 5.6 1.552 7.024 3.09a11.4 11.4 0 0 1 1.539 2.107 10 10 0 0 1 .451.901l.024.057.006.016.002.005zm-.466.181.466-.18a.5.5 0 0 1 0 .36zM.92 9.783l.466.18-.466.18a.5.5 0 0 1 0-.36m11.417.18a2.38 2.38 0 0 1-2.37 2.392 2.38 2.38 0 0 1-2.372-2.392 2.38 2.38 0 0 1 2.371-2.392 2.38 2.38 0 0 1 2.371 2.392m1 0c0 1.873-1.509 3.392-3.37 3.392s-3.372-1.519-3.372-3.392 1.51-3.392 3.371-3.392c1.862 0 3.371 1.519 3.371 3.392" clip-rule="evenodd"></path></svg></div></div></div><!----></div><div data-v-8964fea1="" style="position: relative;"><div data-v-4b3aafaf="" data-v-8964fea1="" style="font-size: 0px; width: 26px; height: 26px;"><div data-v-4b3aafaf="" class="icon-button" aria-disabled="false" style="width: 26px; height: 26px;"><div data-v-b348f0a6="" data-v-4b3aafaf="" class="icon svg-icon" style="width: 18px; height: 18px; background-image: none;"><svg data-v-b348f0a6="" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="none" viewBox="0 0 24 24" class="svg"><path fill="#000" fill-opacity=".6" d="M9.704 12.51A2 2 0 0 1 11.5 14.5v3l-.01.204a2 2 0 0 1-1.786 1.785L9.5 19.5h-3l-.204-.01a2 2 0 0 1-1.785-1.786L4.5 17.5v-3a2 2 0 0 1 2-2h3zm8 0A2 2 0 0 1 19.5 14.5v3l-.01.204a2 2 0 0 1-1.786 1.785l-.204.011h-3l-.204-.01a2 2 0 0 1-1.785-1.786L12.5 17.5v-3a2 2 0 0 1 2-2h3zM14.5 14a.5.5 0 0 0-.5.5v3a.5.5 0 0 0 .5.5h3a.5.5 0 0 0 .5-.5v-3a.5.5 0 0 0-.5-.5zm-8 0a.5.5 0 0 0-.5.5v3a.5.5 0 0 0 .5.5h3a.5.5 0 0 0 .5-.5v-3a.5.5 0 0 0-.5-.5zm3.204-9.49A2 2 0 0 1 11.5 6.5v3l-.01.204a2 2 0 0 1-1.786 1.785L9.5 11.5h-3l-.204-.01A2 2 0 0 1 4.51 9.703L4.5 9.5v-3a2 2 0 0 1 2-2h3zm8 0A2 2 0 0 1 19.5 6.5v3l-.01.204a2 2 0 0 1-1.786 1.785l-.204.011h-3l-.204-.01a2 2 0 0 1-1.785-1.786L12.5 9.5v-3a2 2 0 0 1 2-2h3zM6.5 6a.5.5 0 0 0-.5.5v3a.5.5 0 0 0 .5.5h3a.5.5 0 0 0 .5-.5v-3a.5.5 0 0 0-.5-.5zm8 0a.5.5 0 0 0-.5.5v3a.5.5 0 0 0 .5.5h3a.5.5 0 0 0 .5-.5v-3a.5.5 0 0 0-.5-.5z"></path></svg></div></div></div><div data-v-8964fea1="" class="red-hot" style="right: 2px;"></div></div><div data-v-8964fea1="" style="position: relative;"><div data-v-4b3aafaf="" data-v-8964fea1="" style="font-size: 0px; width: 26px; height: 26px;"><div data-v-4b3aafaf="" class="icon-button" aria-disabled="false" style="width: 26px; height: 26px;"><div data-v-b348f0a6="" data-v-4b3aafaf="" class="icon svg-icon" style="width: 18px; height: 18px; background-image: none;"><svg data-v-b348f0a6="" xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="none" viewBox="0 0 20 20" class="svg"><path fill="#696969" fill-rule="evenodd" d="M3 4.5A2.5 2.5 0 0 1 5.5 2h9A2.5 2.5 0 0 1 17 4.5V9a.5.5 0 0 1-1 0V4.5A1.5 1.5 0 0 0 14.5 3h-9A1.5 1.5 0 0 0 4 4.5V15a1.5 1.5 0 0 0 1.5 1.5h2a.5.5 0 0 1 0 1h-2A2.5 2.5 0 0 1 3 15zM16.845 14l-1.922-3.33h-3.846L9.155 14l1.922 3.33h3.846zm-1.056-3.83a1 1 0 0 0-.866-.5h-3.846a1 1 0 0 0-.866.5L8.29 13.5a1 1 0 0 0 0 1l1.922 3.33a1 1 0 0 0 .866.5h3.846a1 1 0 0 0 .866-.5l1.922-3.33a1 1 0 0 0 0-1zM14 14a1 1 0 1 1-2 0 1 1 0 0 1 2 0m1 0a2 2 0 1 1-4 0 2 2 0 0 1 4 0" clip-rule="evenodd"></path></svg></div></div></div><!----></div><div data-v-8964fea1="" style="position: relative;"><div data-v-4b3aafaf="" data-v-8964fea1="" style="font-size: 0px; width: 26px; height: 26px;"><div data-v-4b3aafaf="" class="icon-button" aria-disabled="false" style="width: 26px; height: 26px;"><div data-v-b348f0a6="" data-v-4b3aafaf="" class="icon svg-icon" style="width: 18px; height: 18px; background-image: none;"><svg data-v-b348f0a6="" xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="none" viewBox="0 0 20 20" class="svg"><path fill="#696969" fill-rule="evenodd" d="M13.429 6.267c0-1.768-1.536-3.2-3.429-3.2-1.826 0-3.318 1.332-3.423 3.012l-.006.188v6.4c0 .547-.44.998-1.01 1.06l-.132.006H4.286c-1.205 0-2.192-.87-2.28-1.974L2 11.6V9.922c0-.75.422-1.44 1.102-1.825l.162-.083 2.165-1.011v-.736c0-2.285 1.924-4.15 4.343-4.262L10 2c2.448 0 4.447 1.796 4.566 4.054l.005.213v.737l2.165 1.01c.72.336 1.193.997 1.257 1.736l.007.172V11.6c0 1.125-.932 2.046-2.115 2.127l-.17.006H14.57v.534c0 2.061-1.79 3.733-4 3.733-.315 0-.571-.239-.571-.533s.256-.534.571-.534c1.515 0 2.755-1.1 2.851-2.491l.007-.175zm1.142 1.93v4.47h1.143c.586 0 1.07-.412 1.135-.943l.008-.124V9.922c0-.36-.193-.69-.508-.887l-.124-.067zM5.43 8.194l-1.654.773c-.344.16-.576.47-.623.821l-.009.133V11.6c0 .547.441.998 1.01 1.06l.133.007H5.43z" clip-rule="evenodd"></path></svg></div></div></div><!----></div></div></div><img data-v-8964fea1="" class="closeIcon" src="chrome-extension://aopddeflghjljihihabdclejbojaomaf/public/images/close.png" style="display: none;"><!----><!----><!----><!----></div><!----><!----><!----><!----><!----><!----><!----><!----><!----><!----><!----><!----><!----><div data-v-0c0be04a=""><!----><!----><!----><!----></div></div></template></wps-translate-entry></html>