/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library

@class WebViewPrivate;

@interface WebView : WAKView {
@private
	WebViewPrivate *_private;	// 68 = 0x44
}
@property(assign) id UIDelegate;	// G=0x347840dd; S=0x3477df25; converted property
@property(assign) BOOL allowsRemoteInspection;	// G=0x347e3895; S=0x3477df91; converted property
@property(assign) BOOL allowsUndo;	// G=0x347e3ca1; S=0x347e3cc1; converted property
@property(retain) id applicationNameForUserAgent;	// G=0x3479fb15; S=0x3477dfed; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x34778c61; S=0x347ea111; converted property
@property(retain) id caretChangeListener;	// G=0x347e393d; S=0x347e395d; converted property
@property(assign, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;	// G=0x3479c62d; S=0x3479d1dd; converted property
@property(retain) id currentNodeHighlight;	// G=0x3477ca85; S=0x347e4429; converted property
@property(retain) id customTextEncodingName;	// G=0x347e4c81; S=0x347e4cfd; converted property
@property(retain) id customUserAgent;	// G=0x347e4f25; S=0x347e4f71; converted property
@property(assign) BOOL defersCallbacks;	// G=0x347928e9; S=0x347846a5; converted property
@property(assign) id downloadDelegate;	// G=0x34777ce1; S=0x3477df05; converted property
@property(assign) BOOL drawsBackground;	// G=0x34778c35; S=0x3479bb39; converted property
@property(assign, getter=isEditable) BOOL editable;	// G=0x3478c011; S=0x347ed6a9; converted property
@property(assign) id editingDelegate;	// G=0x347e3d35; S=0x3477b801; converted property
@property(assign) id frameLoadDelegate;	// G=0x34784409; S=0x3477d285; converted property
@property(retain) id groupName;	// G=0x347e4705; S=0x34779355; converted property
@property(assign) id historyDelegate;	// G=0x347890b1; S=0x347e7001; converted property
@property(retain) id hostWindow;	// G=0x347e3bf1; S=0x347e4abd; converted property
@property(assign) BOOL interactiveFormValidationEnabled;	// G=0x3477b5a5; S=0x347e3ae5; converted property
@property(retain) id mainFrameURL;	// G=0x347845cd; S=0x347e4685; converted property
@property(retain) id mediaStyle;	// G=0x34779061; S=0x347e4ec1; converted property
@property(assign) float mediaVolume;	// G=0x347e3ce1; S=0x347ed125; converted property
@property(assign) float pageSizeMultiplier;	// G=0x347e70e9; S=0x347e70d5; converted property
@property(assign) id policyDelegate;	// G=0x347e3bd1; S=0x3477d8b1; converted property
@property(retain) id preferences;	// G=0x34777031; S=0x347e5869; converted property
@property(retain) id preferencesIdentifier;	// G=0x347e5781; S=0x347e57a9; converted property
@property(assign) id resourceLoadDelegate;	// G=0x34777cc1; S=0x3477d91d; converted property
@property(assign) id scriptDebugDelegate;	// G=0x3478c441; S=0x347e6fa9; converted property
@property(assign, getter=isSelectTrailingWhitespaceEnabled) BOOL selectTrailingWhitespaceEnabled;	// G=0x347e3a61; S=0x347e66e5; converted property
@property(assign) BOOL shouldCloseWithWindow;	// G=0x347e3bb1; S=0x347e3b91; converted property
@property(assign) BOOL shouldUpdateWhileOffscreen;	// G=0x34778ca1; S=0x347e4479; converted property
@property(assign) BOOL smartInsertDeleteEnabled;	// G=0x347e3d15; S=0x347e7259; converted property
@property(assign) BOOL tabKeyCyclesThroughElements;	// G=0x347e3c6d; S=0x347e3c15; converted property
@property(assign) float textSizeMultiplier;	// G=0x347e5575; S=0x347e55c5; converted property
@property(retain) id typingStyle;	// G=0x347e7231; S=0x347e7201; converted property
@property(assign) BOOL usesPageCache;	// G=0x3477af89; S=0x347e667d; converted property
@property(assign) int validationMessageTimerMagnification;	// G=0x3477b5c5; S=0x347e3b05; converted property
+ (id)MIMETypesShownAsHTML;	// 0x347e418d
+ (BOOL)_HTTPPipeliningEnabled;	// 0x347ec869
+ (id)_MIMETypeForFile:(id)file;	// 0x347e694d
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x347eb4bd
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time;	// 0x347e6aad
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time injectedFrames:(int)frames;	// 0x347eb9e9
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist;	// 0x347e6af5
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectedFrames:(int)frames;	// 0x347ebd01
+ (BOOL)_allowsRoundingHacks;	// 0x347eadbd
+ (unsigned)_cacheModel;	// 0x3477e60d
+ (BOOL)_canHandleRequest:(id)request;	// 0x34783e11
+ (BOOL)_canHandleRequest:(id)request forMainFrame:(BOOL)mainFrame;	// 0x34783e29
+ (BOOL)_canShowMIMEType:(id)type allowingPlugins:(BOOL)plugins;	// 0x347877f9
+ (id)_decodeData:(id)data;	// 0x347eb181
+ (double)_defaultMinimumTimerInterval;	// 0x347ec865
+ (unsigned)_didSetCacheModel;	// 0x34773409
+ (void)_disableRemoteInspector;	// 0x347e6a41
+ (void)_enableRemoteInspector;	// 0x347e6a0d
+ (id)_generatedMIMETypeForURLScheme:(id)urlscheme;	// 0x347e6a75
+ (Class)_getPDFRepresentationClass;	// 0x347883d5
+ (Class)_getPDFViewClass;	// 0x34787ff1
+ (void)_handleMemoryWarning;	// 0x347eab91
+ (BOOL)_hasPluginForNodeBeenHalted:(id)nodeBeenHalted;	// 0x347e3b69
+ (BOOL)_isNodeHaltedPlugin:(id)plugin;	// 0x347e3b65
+ (BOOL)_isRemoteInspectorEnabled;	// 0x3477e351
+ (void)_makeAllWebViewsPerformSelector:(SEL)selector;	// 0x347e3f01
+ (unsigned)_maxCacheModelInAnyInstance;	// 0x347e8079
+ (unsigned)_maximumImageSizeBeforeSubsampling;	// 0x347eb4b9
+ (void)_preferencesChangedNotification:(id)notification;	// 0x347732a9
+ (void)_preferencesRemovedNotification:(id)notification;	// 0x347e80f9
+ (void)_preflightSpellChecker;	// 0x347e3d6d
+ (void)_preflightSpellCheckerNow:(id)now;	// 0x347e3d69
+ (id)_productivityDocumentMIMETypes;	// 0x3478b37d
+ (void)_registerPluginMIMEType:(id)type;	// 0x3478f3f9
+ (void)_registerURLSchemeAsSecure:(id)secure;	// 0x347ec785
+ (void)_registerViewClass:(Class)aClass representationClass:(Class)aClass2 forURLScheme:(id)urlscheme;	// 0x347eaf8d
+ (void)_removeAllUserContentFromGroup:(id)group;	// 0x347ec591
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x347eb751
+ (void)_removeUserScriptFromGroup:(id)group world:(id)world url:(id)url;	// 0x347ec011
+ (void)_removeUserScriptsFromGroup:(id)group world:(id)world;	// 0x347ec369
+ (void)_removeUserStyleSheetFromGroup:(id)group world:(id)world url:(id)url;	// 0x347ec1bd
+ (void)_removeUserStyleSheetsFromGroup:(id)group world:(id)world;	// 0x347ec47d
+ (void)_reportException:(OpaqueJSValue *)exception inContext:(OpaqueJSContext *)context;	// 0x347eaaa5
+ (BOOL)_representationExistsForURLScheme:(id)urlscheme;	// 0x347872dd
+ (void)_resetOriginAccessWhitelists;	// 0x347eb9e5
+ (void)_restartHaltedPluginForNode:(id)node;	// 0x347e3b6d
+ (void)_setAllowsRoundingHacks:(BOOL)hacks;	// 0x34772075
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)path;	// 0x347eadad
+ (void)_setCacheModel:(unsigned)model;	// 0x34773419
+ (void)_setDomainRelaxationForbidden:(BOOL)forbidden forURLScheme:(id)urlscheme;	// 0x347ec691
+ (void)_setHTTPPipeliningEnabled:(BOOL)enabled;	// 0x347ec875
+ (void)_setLoadResourcesSerially:(BOOL)serially;	// 0x347e8269
+ (void)_setMaximumImageSizeBeforeSubsampling:(unsigned)subsampling;	// 0x347eb4b1
+ (void)_setPDFRepresentationClass:(Class)aClass;	// 0x34774989
+ (void)_setPDFViewClass:(Class)aClass;	// 0x34774999
+ (void)_setShouldUseFontSmoothing:(BOOL)_set;	// 0x347eb495
+ (BOOL)_shouldUseFontSmoothing;	// 0x347eb4a5
+ (id)_standardUserAgentWithApplicationName:(id)applicationName;	// 0x347832a5
+ (id)_standardUserAgentWithApplicationName:(id)applicationName osMarketingVersion:(id)version;	// 0x34783389
+ (id)_supportedMIMETypes;	// 0x347e6821
+ (void)_unregisterPluginMIMEType:(id)type;	// 0x347e6889
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)mimetype;	// 0x347eae4d
+ (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3478781d
+ (BOOL)canCloseAllWebViews;	// 0x347eadc9
+ (BOOL)canShowFile:(id)file;	// 0x347e68fd
+ (BOOL)canShowMIMEType:(id)type;	// 0x347877e1
+ (BOOL)canShowMIMETypeAsHTML:(id)html;	// 0x347791cd
+ (void)closeAllWebViews;	// 0x347eadd5
+ (void)drainLayerPool;	// 0x3477eab1
+ (void)enableWebThread;	// 0x34771dfd
+ (void)garbageCollectNow;	// 0x3477e815
+ (void)initialize;	// 0x347717dd
+ (void)purgeInactiveFontData;	// 0x3477e9f1
+ (void)registerForMemoryNotifications;	// 0x34772085
+ (void)registerURLSchemeAsLocal:(id)local;	// 0x347e3f29
+ (void)registerViewClass:(Class)aClass representationClass:(Class)aClass2 forMIMEType:(id)mimetype;	// 0x3478f4c1
+ (void)releaseFastMallocMemory;	// 0x3477eb79
+ (void)setMIMETypesShownAsHTML:(id)html;	// 0x347e4009
+ (id)sharedWebInspectorServer;	// 0x3477e385
+ (BOOL)shouldIncludeInWebKitStatistics;	// 0x34777685
+ (void)willEnterBackgroundWithCompletionHandler:(id)completionHandler;	// 0x3477e7c9
- (id)initSimpleHTMLDocumentWithStyle:(id)style frame:(CGRect)frame preferences:(id)preferences groupName:(id)name;	// 0x3479af45
- (id)initWithFrame:(CGRect)frame;	// 0x347749ad
- (id)initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3;	// 0x347749d9
// converted property getter: - (id)UIDelegate;	// 0x347840dd
- (id)_UIDelegateForSelector:(SEL)selector;	// 0x347863b5
- (id)_UIDelegateForwarder;	// 0x347e6221
- (id)_UIKitDelegate;	// 0x34771481
- (id)_UIKitDelegateForwarder;	// 0x3477cbe9
- (void)_addObject:(id)object forIdentifier:(unsigned long)identifier;	// 0x34784959
- (void)_addToAllWebViewsSet;	// 0x3477931d
- (BOOL)_allowsMessaging;	// 0x34793801
- (void)_attachScriptDebuggerToAllFrames;	// 0x347e9fad
- (BOOL)_becomingFirstResponderFromOutside;	// 0x347e3d71
- (void)_cacheFrameLoadDelegateImplementations;	// 0x3477d319
- (void)_cacheHistoryDelegateImplementations;	// 0x347e9b51
- (void)_cacheResourceLoadDelegateImplementations;	// 0x3477d9b1
- (void)_cacheScriptDebugDelegateImplementations;	// 0x347e98e5
- (BOOL)_canResetZoom:(BOOL)zoom;	// 0x347e519d
- (BOOL)_canShowMIMEType:(id)type;	// 0x3478858d
- (BOOL)_canZoomIn:(BOOL)anIn;	// 0x347e53d1
- (BOOL)_canZoomOut:(BOOL)anOut;	// 0x347e5479
- (BOOL)_catchesDelegateExceptions;	// 0x347e3a41
- (void)_clearBackForwardCache;	// 0x347e8ef5
- (void)_clearDelegates;	// 0x347e6429
- (void)_clearLayerSyncLoopObserver;	// 0x34792f81
- (void)_clearMainFrameName;	// 0x347ea8b9
- (void)_close;	// 0x347e8b5d
- (void)_closePluginDatabases;	// 0x347e5e75
- (void)_closeWindow;	// 0x347e6311
- (void)_closeWithFastTeardown;	// 0x347e5ec1
- (void)_closingEventHandling;	// 0x347ee319
- (void)_commonInitializationWithFrameName:(id)frameName groupName:(id)name usesDocumentViews:(BOOL)views;	// 0x34774bf9
- (OpaqueJSValue *)_computedStyleIncludingVisitedInfo:(OpaqueJSContext *)info forElement:(OpaqueJSValue *)element;	// 0x347ed9e9
- (BOOL)_continuousCheckingAllowed;	// 0x347e7fed
- (BOOL)_cookieEnabled;	// 0x347e399d
- (void)_destroyAllPlugIns;	// 0x347e9df1
- (void)_detachScriptDebuggerFromAllFrames;	// 0x347e9ff1
- (id)_deviceOrientationProvider;	// 0x347e3dd5
- (void)_didCommitLoadForFrame:(id)frame;	// 0x3478af71
- (void)_didFinishScrollingOrZooming;	// 0x3479ad5d
- (void)_dispatchPendingLoadRequests;	// 0x347e8281
- (void)_dispatchTileDidDraw:(id)_dispatchTile;	// 0x34787581
- (void)_dispatchUnloadEvent;	// 0x347e894d
- (id)_displayURL;	// 0x347844f1
- (void)_documentScaleChanged;	// 0x3477ca59
- (id)_downloadURL:(id)url;	// 0x347e5f0d
- (id)_editingDelegateForwarder;	// 0x3479c401
- (id)_elementAtWindowPoint:(CGPoint)windowPoint;	// 0x347e49b1
- (void)_executeCoreCommandByName:(id)name value:(id)value;	// 0x347ea63d
- (CGSize)_fixedLayoutSize;	// 0x347e39f9
- (id)_fixedPositionContent;	// 0x34785f09
- (id)_focusedFrame;	// 0x34771515
- (id)_formDelegate;	// 0x347e38b5
- (id)_formDelegateForSelector:(SEL)selector;	// 0x347e6169
- (id)_formDelegateForwarder;	// 0x347e6071
- (id)_frameForCurrentSelection;	// 0x347e6f99
- (id)_frameLoadDelegateForwarder;	// 0x34784339
- (id)_frameViewAtWindowPoint:(CGPoint)windowPoint;	// 0x347e7f09
- (void)_geolocationDidChangePosition:(id)_geolocation;	// 0x347e3e41
- (void)_geolocationDidFailWithError:(id)_geolocation;	// 0x347e3e45
- (id)_geolocationProvider;	// 0x347e3e1d
- (id)_globalHistoryItem;	// 0x347ea235
- (BOOL)_inFastImageScalingMode;	// 0x347e9e35
- (BOOL)_inViewSourceMode;	// 0x347e654d
- (BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 0x347e3b45
- (id)_initWithArguments:(id)arguments;	// 0x347e5ba9
- (id)_initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3 usesDocumentViews:(BOOL)views;	// 0x34774a0d
- (void)_injectSolarWalkQuirksScript;	// 0x347e8295
- (void)_insertNewlineInQuotedContent;	// 0x347e7e45
- (BOOL)_isClosed;	// 0x347e3869
- (BOOL)_isClosing;	// 0x3479c795
- (BOOL)_isLoading;	// 0x347e7ea5
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)plugin;	// 0x347e5c65
- (BOOL)_isPerformingProgrammaticFocus;	// 0x3479c331
- (BOOL)_isProcessingUserGesture;	// 0x347e9619
- (BOOL)_isSoftwareRenderable;	// 0x347ea939
- (BOOL)_isStopping;	// 0x34793e31
- (BOOL)_isUsingAcceleratedCompositing;	// 0x347ea035
- (int)_keyboardUIMode;	// 0x347e8191
- (void)_loadBackForwardListFromOtherView:(id)otherView;	// 0x347e96cd
- (BOOL)_locked_plugInsAreRunningInFrame:(id)frame;	// 0x347e6575
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)selector inFrame:(id)frame;	// 0x347955b5
- (Frame *)_mainCoreFrame;	// 0x347714e9
- (id)_mainFrameOverrideEncoding;	// 0x347e4c91
- (void)_mouseDidMoveOverElement:(id)_mouse modifierFlags:(unsigned)flags;	// 0x347973cd
- (BOOL)_mustDrawUnionedRect:(CGRect)rect singleRects:(const CGRect *)rects count:(int)count;	// 0x347e37cd
- (BOOL)_needsOneShotDrawingSynchronization;	// 0x347e3d91
- (BOOL)_needsPreHTML5ParserQuirks;	// 0x3477b509
- (BOOL)_needsUnrestrictedGetMatchedCSSRules;	// 0x3477b5a1
- (OpaqueJSValue *)_nodesFromRect:(OpaqueJSContext *)rect forDocument:(OpaqueJSValue *)document x:(int)x y:(int)y top:(unsigned)top right:(unsigned)right bottom:(unsigned)bottom left:(unsigned)left ignoreClipping:(BOOL)clipping;	// 0x347edcf5
- (id)_objectForIdentifier:(unsigned long)identifier;	// 0x34786ab9
- (id)_openNewWindowWithRequest:(id)request;	// 0x347e963d
- (void)_overflowScrollPositionChangedTo:(CGPoint)to forNode:(id)node;	// 0x347ea1e1
- (void)_performResponderOperation:(SEL)operation with:(id)with;	// 0x347a05e9
- (id)_pluginForExtension:(id)extension;	// 0x347e5cdd
- (id)_pluginForMIMEType:(id)mimetype;	// 0x347e5d4d
- (BOOL)_pluginsAreRunning;	// 0x347e9dbd
- (id)_policyDelegateForwarder;	// 0x3478380d
- (void)_popPerformingProgrammaticFocus;	// 0x347e38f9
- (BOOL)_postsAcceleratedCompositingNotifications;	// 0x347e3aa5
- (void)_preferencesChanged:(id)changed;	// 0x34779465
- (void)_preferencesChangedNotification:(id)notification;	// 0x3477e301
- (void)_pushPerformingProgrammaticFocus;	// 0x347e38d5
- (float)_realZoomMultiplier;	// 0x34779249
- (BOOL)_realZoomMultiplierIsTextOnly;	// 0x34779269
- (void)_removeFromAllWebViewsSet;	// 0x347e3ee1
- (void)_removeObjectForIdentifier:(unsigned long)identifier;	// 0x3478c12d
- (void)_replaceSelectionWithNode:(id)node matchStyle:(BOOL)style;	// 0x347e7e6d
- (void)_resetZoom:(id)zoom isTextOnly:(BOOL)only;	// 0x347e50dd
- (id)_resourceLoadDelegateForwarder;	// 0x34786b91
- (id)_responderForResponderOperations;	// 0x347a0655
- (void)_restorePlugInsFromCache;	// 0x347e9f61
- (void)_retrieveKeyboardUIModeFromPreferences:(id)preferences;	// 0x347ed999
- (void)_scaleWebView:(float)view atOrigin:(CGPoint)origin;	// 0x347ea9f5
- (void)_scheduleCompositingLayerSync;	// 0x34792a7d
- (id)_selectedOrMainFrame;	// 0x347e8239
- (void)_selectionChanged;	// 0x3479c6b5
- (BOOL)_selectionIsAll;	// 0x347ed96d
- (BOOL)_selectionIsCaret;	// 0x347e9391
- (void)_setAllowsMessaging:(BOOL)messaging;	// 0x3477c13d
- (void)_setCatchesDelegateExceptions:(BOOL)exceptions;	// 0x347e3a21
- (void)_setCookieEnabled:(BOOL)enabled;	// 0x347e39c9
- (void)_setCustomFixedPositionLayoutRect:(CGRect)rect;	// 0x3477caa5
- (void)_setCustomHTMLTokenizerChunkSize:(int)size;	// 0x347ea889
- (void)_setCustomHTMLTokenizerTimeDelay:(double)delay;	// 0x347ea84d
- (void)_setDeviceOrientationProvider:(id)provider;	// 0x347e3db1
- (void)_setFixedLayoutSize:(CGSize)size;	// 0x3477cf7d
- (void)_setFontFallbackPrefersPictographs:(BOOL)pictographs;	// 0x3477dfb1
- (void)_setFormDelegate:(id)delegate;	// 0x3477c0b5
- (void)_setGeolocationProvider:(id)provider;	// 0x347e3df9
- (void)_setGlobalHistoryItem:(HistoryItem *)item;	// 0x3478a5f9
- (void)_setInViewSourceMode:(BOOL)viewSourceMode;	// 0x347e6521
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)bitmap;	// 0x347e3b25
- (void)_setJavaScriptURLsAreAllowed:(BOOL)allowed;	// 0x347ea90d
- (BOOL)_setMediaLayer:(id)layer forPluginView:(id)pluginView;	// 0x34792501
- (void)_setMinimumTimerInterval:(double)interval;	// 0x347eaa69
- (void)_setMouseDownEvent:(id)event;	// 0x347ee31d
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)synchronization;	// 0x34792cc9
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(BOOL)rules;	// 0x347e3e49
- (void)_setNetworkStateIsOnline:(BOOL)online;	// 0x3477e59d
- (void)_setPostsAcceleratedCompositingNotifications:(BOOL)notifications;	// 0x347e3ac5
- (void)_setResourceLoadSchedulerSuspended:(BOOL)suspended;	// 0x347e95fd
- (void)_setToolTip:(id)tip;	// 0x3479763d
- (void)_setUIKitDelegate:(id)delegate;	// 0x3477b795
- (void)_setUseFastImageScalingMode:(BOOL)mode;	// 0x347e9e65
- (void)_setUseFixedLayout:(BOOL)layout;	// 0x347ea195
- (void)_setWantsTelephoneNumberParsing:(BOOL)parsing;	// 0x3477c179
- (void)_setWebGLEnabled:(BOOL)enabled;	// 0x3477e491
- (void)_setZoomMultiplier:(float)multiplier isTextOnly:(BOOL)only;	// 0x347792a1
- (BOOL)_shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x347a0e19
- (void)_startAllPlugIns;	// 0x347e9ec9
- (void)_stopAllPlugIns;	// 0x347e9f15
- (void)_stopAllPlugInsForPageCache;	// 0x34795569
- (void)_stopAutoscrollTimer;	// 0x347ee539
- (BOOL)_syncCompositingChanges;	// 0x34792f25
- (id)_touchEventRegions;	// 0x3479a581
- (void)_updateActiveState;	// 0x3477c055
- (BOOL)_useFixedLayout;	// 0x347eaa3d
- (BOOL)_usesDocumentViews;	// 0x3477877d
- (id)_videoProxyPluginForMIMEType:(id)mimetype;	// 0x34791f2d
- (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype;	// 0x347e5dbd
- (float)_viewScaleFactor;	// 0x347e6725
- (void)_viewWillDrawInternal;	// 0x34792f51
- (BOOL)_wantsTelephoneNumberParsing;	// 0x347e3e89
- (BOOL)_webGLEnabled;	// 0x347e3eb5
- (id)_webMailDelegate;	// 0x34787685
- (id)_webcore_effectiveFirstResponder;	// 0x347e4805
- (void)_willStartScrollingOrZooming;	// 0x3479ac0d
- (void)_zoomIn:(id)anIn isTextOnly:(BOOL)only;	// 0x347e5239
- (float)_zoomMultiplier:(BOOL)multiplier;	// 0x347e5521
- (void)_zoomOut:(id)anOut isTextOnly:(BOOL)only;	// 0x347e5305
- (BOOL)acceptsFirstResponder;	// 0x347e4905
- (void)addCaretChangeListener:(id)listener;	// 0x347e633d
- (void)addVisitedLinks:(id)links;	// 0x347ed155
- (void)alignCenter:(id)center;	// 0x347e7431
- (void)alignJustified:(id)justified;	// 0x347e7445
- (void)alignLeft:(id)left;	// 0x347e7459
- (void)alignRight:(id)right;	// 0x347e746d
// converted property getter: - (BOOL)allowsRemoteInspection;	// 0x347e3895
// converted property getter: - (BOOL)allowsUndo;	// 0x347e3ca1
// converted property getter: - (id)applicationNameForUserAgent;	// 0x3479fb15
- (void)applyStyle:(id)style;	// 0x347ed7dd
- (BOOL)areMemoryCacheDelegateCallsEnabled;	// 0x347e3a81
- (id)backForwardList;	// 0x3477c1b5
// converted property getter: - (CGColorRef)backgroundColor;	// 0x34778c61
- (BOOL)becomeFirstResponder;	// 0x347e488d
- (BOOL)canBeRemotelyInspected;	// 0x347e601d
- (BOOL)canGoBack;	// 0x3478b3d9
- (BOOL)canGoForward;	// 0x3478b41d
- (BOOL)canMakeTextLarger;	// 0x347e6d51
- (BOOL)canMakeTextSmaller;	// 0x347e6c91
- (BOOL)canMakeTextStandardSize;	// 0x347e6e11
- (BOOL)canMarkAllTextMatches;	// 0x347ecce1
- (BOOL)canResetPageZoom;	// 0x347e7191
- (BOOL)canZoomPageIn;	// 0x347e7139
- (BOOL)canZoomPageOut;	// 0x347e7165
- (void)capitalizeWord:(id)word;	// 0x347e7481
// converted property getter: - (id)caretChangeListener;	// 0x347e393d
- (id)caretChangeListeners;	// 0x347e397d
- (void)caretChanged;	// 0x347e9cc1
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x347e7495
- (void)changeAttributes:(id)attributes;	// 0x347e74a9
- (void)changeBaseWritingDirection:(id)direction;	// 0x347e74bd
- (void)changeBaseWritingDirectionToLTR:(id)ltr;	// 0x347e74d1
- (void)changeBaseWritingDirectionToRTL:(id)rtl;	// 0x347e74e5
- (void)changeColor:(id)color;	// 0x347e74f9
- (void)changeDocumentBackgroundColor:(id)color;	// 0x347e750d
- (void)changeFont:(id)font;	// 0x347e7521
- (void)changeSpelling:(id)spelling;	// 0x347e7535
- (void)checkSpelling:(id)spelling;	// 0x347e7549
- (void)clearText:(id)text;	// 0x347e7df5
- (void)close;	// 0x347e5a81
- (void)complete:(id)complete;	// 0x347e755d
- (id)computedStyleForElement:(id)element pseudoElement:(id)element2;	// 0x347e71bd
- (void)copy:(id)copy;	// 0x347e7571
- (void)copyFont:(id)font;	// 0x347e7585
- (unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x347e6789
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x347a1609
- (unsigned)countMatchesForText:(id)text options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x347a15d9
- (BOOL)cssAnimationsSuspended;	// 0x347e3b71
// converted property getter: - (id)currentNodeHighlight;	// 0x3477ca85
// converted property getter: - (id)customTextEncodingName;	// 0x347e4c81
// converted property getter: - (id)customUserAgent;	// 0x347e4f25
- (void)cut:(id)cut;	// 0x347e7599
- (void)dealloc;	// 0x347e5aed
// converted property getter: - (BOOL)defersCallbacks;	// 0x347928e9
- (void)delete:(id)aDelete;	// 0x347e75ad
- (void)deleteBackward:(id)backward;	// 0x347e75c1
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x347e75d5
- (void)deleteForward:(id)forward;	// 0x347e75e9
- (void)deleteSelection;	// 0x347ed775
- (void)deleteToBeginningOfLine:(id)line;	// 0x347e75fd
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x347e7611
- (void)deleteToEndOfLine:(id)line;	// 0x347e7625
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x347e7639
- (void)deleteToMark:(id)mark;	// 0x347e764d
- (void)deleteWordBackward:(id)backward;	// 0x347e7661
- (void)deleteWordForward:(id)forward;	// 0x347e7675
- (id)documentViewAtWindowPoint:(CGPoint)windowPoint;	// 0x347e4a95
// converted property getter: - (id)downloadDelegate;	// 0x34777ce1
- (void)drawRect:(CGRect)rect;	// 0x347858a1
- (void)drawSingleRect:(CGRect)rect;	// 0x347e8651
// converted property getter: - (BOOL)drawsBackground;	// 0x34778c35
- (id)editableDOMRangeForPoint:(CGPoint)point;	// 0x347ed501
// converted property getter: - (id)editingDelegate;	// 0x347e3d35
- (id)elementAtPoint:(CGPoint)point;	// 0x347e4961
- (double)estimatedProgress;	// 0x3478bb59
- (void)finalize;	// 0x347e5aad
- (BOOL)findString:(id)string options:(unsigned)options;	// 0x347ecac9
// converted property getter: - (id)frameLoadDelegate;	// 0x34784409
- (BOOL)goBack;	// 0x347e56f5
- (void)goBack:(id)back;	// 0x347e6bcd
- (BOOL)goForward;	// 0x347e5669
- (void)goForward:(id)forward;	// 0x347e6bdd
- (BOOL)goToBackForwardItem:(id)backForwardItem;	// 0x347e5629
// converted property getter: - (id)groupName;	// 0x347e4705
// converted property getter: - (id)historyDelegate;	// 0x347890b1
// converted property getter: - (id)hostWindow;	// 0x347e3bf1
- (void)ignoreSpelling:(id)spelling;	// 0x347e7689
- (void)indent:(id)indent;	// 0x347e769d
- (void)insertBacktab:(id)backtab;	// 0x347e76b1
- (void)insertDictationPhrases:(id)phrases metadata:(id)metadata;	// 0x347ed815
- (void)insertLineBreak:(id)aBreak;	// 0x347e76c5
- (void)insertNewline:(id)newline;	// 0x347e76d9
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x347e76ed
- (void)insertParagraphSeparator:(id)separator;	// 0x347e7701
- (void)insertTab:(id)tab;	// 0x347e7715
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x347e7729
- (void)insertText:(id)text;	// 0x347a05d5
- (id)inspector;	// 0x347e5fa9
// converted property getter: - (BOOL)interactiveFormValidationEnabled;	// 0x3477b5a5
- (BOOL)isAutomaticDashSubstitutionEnabled;	// 0x347e3d5d
- (BOOL)isAutomaticLinkDetectionEnabled;	// 0x347e3d59
- (BOOL)isAutomaticQuoteSubstitutionEnabled;	// 0x347e3d55
- (BOOL)isAutomaticSpellingCorrectionEnabled;	// 0x347e3d65
- (BOOL)isAutomaticTextReplacementEnabled;	// 0x347e3d61
// converted property getter: - (BOOL)isContinuousSpellCheckingEnabled;	// 0x3479c62d
// converted property getter: - (BOOL)isEditable;	// 0x3478c011
- (BOOL)isFlipped;	// 0x347e3839
- (BOOL)isLoading;	// 0x347e466d
// converted property getter: - (BOOL)isSelectTrailingWhitespaceEnabled;	// 0x347e3a61
- (void)lowercaseWord:(id)word;	// 0x347e773d
- (id)mainFrame;	// 0x3477c925
- (id)mainFrameDocument;	// 0x347e44cd
- (id)mainFrameIconURL;	// 0x347e4519
- (id)mainFrameTitle;	// 0x347e4625
// converted property getter: - (id)mainFrameURL;	// 0x347845cd
- (BOOL)maintainsInactiveSelection;	// 0x347a1c11
- (void)makeBaseWritingDirectionLeftToRight:(id)right;	// 0x347e7751
- (void)makeBaseWritingDirectionRightToLeft:(id)left;	// 0x347e7765
- (void)makeTextLarger:(id)larger;	// 0x347e6dad
- (void)makeTextSmaller:(id)smaller;	// 0x347e6ced
- (void)makeTextStandardSize:(id)size;	// 0x347e6e6d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x347e7779
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x347e778d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x347e77a1
- (unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit;	// 0x347e6751
// converted property getter: - (id)mediaStyle;	// 0x34779061
// converted property getter: - (float)mediaVolume;	// 0x347e3ce1
- (void)mouseDown:(id)down;	// 0x347ee389
- (void)mouseUp:(id)up;	// 0x347ee5c1
- (void)moveBackward:(id)backward;	// 0x347e77b5
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x347e77c9
- (void)moveDown:(id)down;	// 0x347e77dd
- (void)moveDownAndModifySelection:(id)selection;	// 0x347e77f1
- (void)moveForward:(id)forward;	// 0x347e7805
- (void)moveForwardAndModifySelection:(id)selection;	// 0x347e7819
- (void)moveLeft:(id)left;	// 0x347e782d
- (void)moveLeftAndModifySelection:(id)selection;	// 0x347e7841
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x347e7855
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x347e7869
- (void)moveRight:(id)right;	// 0x347e787d
- (void)moveRightAndModifySelection:(id)selection;	// 0x347e7891
- (void)moveToBeginningOfDocument:(id)document;	// 0x347e78a5
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x347e78b9
- (void)moveToBeginningOfLine:(id)line;	// 0x347e78cd
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347e78e1
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x347e78f5
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x347e7909
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x347e791d
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x347e7931
- (void)moveToEndOfDocument:(id)document;	// 0x347e7945
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x347e7959
- (void)moveToEndOfLine:(id)line;	// 0x347e796d
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347e7981
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x347e7995
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x347e79a9
- (void)moveToEndOfSentence:(id)sentence;	// 0x347e79bd
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x347e79d1
- (void)moveToLeftEndOfLine:(id)line;	// 0x347e79e5
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347e79f9
- (void)moveToRightEndOfLine:(id)line;	// 0x347e7a0d
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347e7a21
- (void)moveUp:(id)up;	// 0x347e7a35
- (void)moveUpAndModifySelection:(id)selection;	// 0x347e7a49
- (void)moveWordBackward:(id)backward;	// 0x347e7a5d
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x347e7a71
- (void)moveWordForward:(id)forward;	// 0x347e7a85
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x347e7a99
- (void)moveWordLeft:(id)left;	// 0x347e7aad
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x347e7ac1
- (void)moveWordRight:(id)right;	// 0x347e7ad5
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x347e7ae9
- (void)orderFrontSubstitutionsPanel:(id)panel;	// 0x347e7b11
- (void)outdent:(id)outdent;	// 0x347e7afd
- (Page *)page;	// 0x3478c5e5
- (void)pageDown:(id)down;	// 0x347e7b25
- (void)pageDownAndModifySelection:(id)selection;	// 0x347e7b39
// converted property getter: - (float)pageSizeMultiplier;	// 0x347e70e9
- (void)pageUp:(id)up;	// 0x347e7b4d
- (void)pageUpAndModifySelection:(id)selection;	// 0x347e7b61
- (void)paste:(id)paste;	// 0x347e7b75
- (void)pasteAsPlainText:(id)text;	// 0x347e7b89
- (void)pasteAsRichText:(id)text;	// 0x347e7b9d
- (void)pasteFont:(id)font;	// 0x347e7bb1
- (void)performFindPanelAction:(id)action;	// 0x347e7bc5
// converted property getter: - (id)policyDelegate;	// 0x347e3bd1
// converted property getter: - (id)preferences;	// 0x34777031
// converted property getter: - (id)preferencesIdentifier;	// 0x347e5781
- (id)previousValidKeyView;	// 0x347e428d
- (id)quickLookContentForURL:(id)url;	// 0x34782e35
- (id)rectsForTextMatches;	// 0x347ece61
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3477ba09
- (void)reload:(id)reload;	// 0x347a1c55
- (void)reloadFromOrigin:(id)origin;	// 0x347e6c69
- (void)removeAllCaretChangeListeners;	// 0x347e63f9
- (void)removeCaretChangeListener:(id)listener;	// 0x347e63c9
- (void)removeVisitedLink:(id)link;	// 0x347ed3f5
- (void)replaceSelectionWithArchive:(id)archive;	// 0x347e73f1
- (void)replaceSelectionWithMarkupString:(id)markupString;	// 0x347e73ad
- (void)replaceSelectionWithNode:(id)node;	// 0x347e7341
- (void)replaceSelectionWithText:(id)text;	// 0x347e7379
- (void)resetPageZoom:(id)zoom;	// 0x347e71a9
// converted property getter: - (id)resourceLoadDelegate;	// 0x34777cc1
// converted property getter: - (id)scriptDebugDelegate;	// 0x3478c441
- (void)scrollDOMRangeToVisible:(id)visible;	// 0x347e7031
- (void)scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x347e7081
- (void)scrollLineDown:(id)down;	// 0x347e7bd9
- (void)scrollLineUp:(id)up;	// 0x347e7bed
- (void)scrollPageDown:(id)down;	// 0x347e7c01
- (void)scrollPageUp:(id)up;	// 0x347e7c15
- (void)scrollToBeginningOfDocument:(id)document;	// 0x347e7c29
- (void)scrollToEndOfDocument:(id)document;	// 0x347e7c3d
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x347e4749
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x347e67c5
- (void)selectAll:(id)all;	// 0x347e7c51
- (void)selectLine:(id)line;	// 0x347e7c65
- (void)selectParagraph:(id)paragraph;	// 0x347e7c79
- (void)selectSentence:(id)sentence;	// 0x347e7c8d
- (void)selectToMark:(id)mark;	// 0x347e7ca1
- (void)selectWord:(id)word;	// 0x347e7cb5
- (id)selectedDOMRange;	// 0x347ea529
- (id)selectedFrame;	// 0x347714a1
- (int)selectionAffinity;	// 0x347e9369
// converted property setter: - (void)setAllowsRemoteInspection:(BOOL)inspection;	// 0x3477df91
// converted property setter: - (void)setAllowsUndo:(BOOL)undo;	// 0x347e3cc1
// converted property setter: - (void)setApplicationNameForUserAgent:(id)userAgent;	// 0x3477dfed
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x347ea111
- (void)setCSSAnimationsSuspended:(BOOL)suspended;	// 0x347ea999
// converted property setter: - (void)setCaretChangeListener:(id)listener;	// 0x347e395d
// converted property setter: - (void)setContinuousSpellCheckingEnabled:(BOOL)enabled;	// 0x3479d1dd
// converted property setter: - (void)setCurrentNodeHighlight:(id)highlight;	// 0x347e4429
// converted property setter: - (void)setCustomTextEncodingName:(id)name;	// 0x347e4cfd
// converted property setter: - (void)setCustomUserAgent:(id)agent;	// 0x347e4f71
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x347846a5
// converted property setter: - (void)setDownloadDelegate:(id)delegate;	// 0x3477df05
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x3479bb39
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x347ed6a9
// converted property setter: - (void)setEditingDelegate:(id)delegate;	// 0x3477b801
// converted property setter: - (void)setFrameLoadDelegate:(id)delegate;	// 0x3477d285
- (void)setFrameSize:(CGSize)size;	// 0x347e8791
// converted property setter: - (void)setGroupName:(id)name;	// 0x34779355
// converted property setter: - (void)setHistoryDelegate:(id)delegate;	// 0x347e7001
// converted property setter: - (void)setHostWindow:(id)window;	// 0x347e4abd
// converted property setter: - (void)setInteractiveFormValidationEnabled:(BOOL)enabled;	// 0x347e3ae5
- (void)setMainFrameDocumentReady:(BOOL)ready;	// 0x34777dbd
// converted property setter: - (void)setMainFrameURL:(id)url;	// 0x347e4685
- (void)setMaintainsBackForwardList:(BOOL)list;	// 0x3477b755
- (void)setMark:(id)mark;	// 0x347e7cc9
// converted property setter: - (void)setMediaStyle:(id)style;	// 0x347e4ec1
// converted property setter: - (void)setMediaVolume:(float)volume;	// 0x347ed125
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)enabled;	// 0x347ea8e1
- (void)setNextKeyView:(id)view;	// 0x347e4775
// converted property setter: - (void)setPageSizeMultiplier:(float)multiplier;	// 0x347e70d5
// converted property setter: - (void)setPolicyDelegate:(id)delegate;	// 0x3477d8b1
// converted property setter: - (void)setPreferences:(id)preferences;	// 0x347e5869
// converted property setter: - (void)setPreferencesIdentifier:(id)identifier;	// 0x347e57a9
// converted property setter: - (void)setResourceLoadDelegate:(id)delegate;	// 0x3477d91d
// converted property setter: - (void)setScriptDebugDelegate:(id)delegate;	// 0x347e6fa9
// converted property setter: - (void)setSelectTrailingWhitespaceEnabled:(BOOL)enabled;	// 0x347e66e5
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity;	// 0x347ed645
// converted property setter: - (void)setShouldCloseWithWindow:(BOOL)closeWithWindow;	// 0x347e3b91
// converted property setter: - (void)setShouldUpdateWhileOffscreen:(BOOL)updateWhileOffscreen;	// 0x347e4479
// converted property setter: - (void)setSmartInsertDeleteEnabled:(BOOL)enabled;	// 0x347e7259
// converted property setter: - (void)setTabKeyCyclesThroughElements:(BOOL)elements;	// 0x347e3c15
// converted property setter: - (void)setTextSizeMultiplier:(float)multiplier;	// 0x347e55c5
// converted property setter: - (void)setTypingStyle:(id)style;	// 0x347e7201
// converted property setter: - (void)setUIDelegate:(id)delegate;	// 0x3477df25
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x347e667d
// converted property setter: - (void)setValidationMessageTimerMagnification:(int)magnification;	// 0x347e3b05
- (void)setWebMailDelegate:(id)delegate;	// 0x347e391d
- (BOOL)shouldClose;	// 0x347ece3d
// converted property getter: - (BOOL)shouldCloseWithWindow;	// 0x347e3bb1
// converted property getter: - (BOOL)shouldUpdateWhileOffscreen;	// 0x34778ca1
- (void)showGuessPanel:(id)panel;	// 0x347e7cdd
// converted property getter: - (BOOL)smartInsertDeleteEnabled;	// 0x347e3d15
- (void)startSpeaking:(id)speaking;	// 0x347e7cf1
- (void)stopLoading:(id)loading;	// 0x347a1dd9
- (void)stopLoadingAndClear;	// 0x347ec8cd
- (void)stopSpeaking:(id)speaking;	// 0x347e7d05
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x347e4c55
- (id)styleDeclarationWithText:(id)text;	// 0x347e72f1
- (void)subscript:(id)subscript;	// 0x347e7d19
- (void)superscript:(id)superscript;	// 0x347e7d2d
- (BOOL)supportsTextEncoding;	// 0x347e4e41
- (void)swapWithMark:(id)mark;	// 0x347e7d41
// converted property getter: - (BOOL)tabKeyCyclesThroughElements;	// 0x347e3c6d
- (void)takeFindStringFromSelection:(id)selection;	// 0x347e7d55
- (void)takeStringURLFrom:(id)from;	// 0x347e6b39
- (id)textIteratorForRect:(CGRect)rect;	// 0x347ea265
// converted property getter: - (float)textSizeMultiplier;	// 0x347e5575
- (void)toggleBaseWritingDirection:(id)direction;	// 0x347e7d69
- (void)toggleBold:(id)bold;	// 0x347e7e09
- (void)toggleItalic:(id)italic;	// 0x347e7e1d
- (void)toggleUnderline:(id)underline;	// 0x347e7e31
- (void)transpose:(id)transpose;	// 0x347e7d7d
// converted property getter: - (id)typingStyle;	// 0x347e7231
- (void)underline:(id)underline;	// 0x347e7d91
- (id)undoManager;	// 0x347a137d
- (void)unmarkAllTextMatches;	// 0x347ecd89
- (void)unscript:(id)unscript;	// 0x347e7da5
- (void)updateLayoutIgnorePendingStyleSheets;	// 0x347e88b1
- (void)uppercaseWord:(id)word;	// 0x347e7db9
- (id)userAgentForURL:(id)url;	// 0x347830dd
// converted property getter: - (BOOL)usesPageCache;	// 0x3477af89
// converted property getter: - (int)validationMessageTimerMagnification;	// 0x3477b5c5
- (void)viewDidMoveToWindow;	// 0x3477bf2d
- (void)viewWillDraw;	// 0x347856f1
- (id)windowScriptObject;	// 0x34792399
- (void)yank:(id)yank;	// 0x347e7dcd
- (void)yankAndSelect:(id)select;	// 0x347e7de1
- (void)zoomPageIn:(id)anIn;	// 0x347e7151
- (void)zoomPageOut:(id)anOut;	// 0x347e717d
@end

