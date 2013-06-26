/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIResponder.h"
#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"

@class UIStatusBar, UIAlertView, NSMutableSet, NSArray, NSTimer, UIWindow, UIEvent, UIColor, NSMutableArray, UIStatusBarWindow, NSString;
@protocol UIApplicationDelegate;

@interface UIApplication : UIResponder <UIActionSheetDelegate> {
	id<UIApplicationDelegate> _delegate;	// 4 = 0x4
	CFDictionaryRef _touchMap;	// 8 = 0x8
	NSMutableSet *_exclusiveTouchWindows;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	UIEvent *_touchesEvent;	// 20 = 0x14
	UIEvent *_motionEvent;	// 24 = 0x18
	UIEvent *_remoteControlEvent;	// 28 = 0x1c
	int _remoteControlEventObservers;	// 32 = 0x20
	NSArray *_topLevelNibObjects;	// 36 = 0x24
	int _networkResourcesCurrentlyLoadingCount;	// 40 = 0x28
	NSTimer *_hideNetworkActivityIndicatorTimer;	// 44 = 0x2c
	UIAlertView *_editAlertView;	// 48 = 0x30
	UIStatusBar *_statusBar;	// 52 = 0x34
	int _statusBarRequestedStyle;	// 56 = 0x38
	UIStatusBarWindow *_statusBarWindow;	// 60 = 0x3c
	NSMutableArray *_observerBlocks;	// 64 = 0x40
	NSMutableArray *_deferredAnimationBlocks;	// 68 = 0x44
	NSString *_mainStoryboardName;	// 72 = 0x48
	NSMutableArray *_tintViewDurationStack;	// 76 = 0x4c
	NSMutableArray *_statusBarTintColorLockingControllers;	// 80 = 0x50
	int _statusBarTintColorLockingCount;	// 84 = 0x54
	struct {
		unsigned deactivatingReasonFlags : 8;
		unsigned isSuspended : 1;
		unsigned isSuspendedEventsOnly : 1;
		unsigned isLaunchedSuspended : 1;
		unsigned calledNonSuspendedLaunchDelegate : 1;
		unsigned isHandlingURL : 1;
		unsigned isHandlingRemoteNotification : 1;
		unsigned isHandlingLocalNotification : 1;
		unsigned statusBarShowsProgress : 1;
		unsigned statusBarHidden : 1;
		unsigned blockInteractionEvents : 4;
		unsigned receivesMemoryWarnings : 1;
		unsigned showingProgress : 1;
		unsigned receivesPowerMessages : 1;
		unsigned launchEventReceived : 1;
		unsigned systemIsAnimatingApplicationLifecycleEvent : 1;
		unsigned isResuming : 1;
		unsigned isSuspendedUnderLock : 1;
		unsigned shouldExitAfterSendSuspend : 1;
		unsigned terminating : 1;
		unsigned isHandlingShortCutURL : 1;
		unsigned idleTimerDisabled : 1;
		unsigned deviceOrientation : 3;
		unsigned delegateShouldBeReleasedUponSet : 1;
		unsigned delegateHandleOpenURL : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateDidReceiveMemoryWarning : 1;
		unsigned delegateWillTerminate : 1;
		unsigned delegateSignificantTimeChange : 1;
		unsigned delegateWillChangeInterfaceOrientation : 1;
		unsigned delegateDidChangeInterfaceOrientation : 1;
		unsigned delegateWillChangeStatusBarFrame : 1;
		unsigned delegateDidChangeStatusBarFrame : 1;
		unsigned delegateDeviceAccelerated : 1;
		unsigned delegateDeviceChangedOrientation : 1;
		unsigned delegateDidBecomeActive : 1;
		unsigned delegateWillResignActive : 1;
		unsigned delegateDidEnterBackground : 1;
		unsigned delegateDidEnterBackgroundWasSent : 1;
		unsigned delegateWillEnterForeground : 1;
		unsigned delegateWillSuspend : 1;
		unsigned delegateDidResume : 1;
		unsigned delegateSupportsStateRestoration : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned userDefaultsSyncDisabled : 1;
		unsigned headsetButtonClickCount : 4;
		unsigned isHeadsetButtonDown : 1;
		unsigned isFastForwardActive : 1;
		unsigned isRewindActive : 1;
		unsigned shakeToEdit : 1;
		unsigned isClassic : 1;
		unsigned zoomInClassicMode : 1;
		unsigned ignoreHeadsetClicks : 1;
		unsigned touchRotationDisabled : 1;
		unsigned taskSuspendingUnsupported : 1;
		unsigned taskSuspendingOnLockUnsupported : 1;
		unsigned isUnitTests : 1;
		unsigned requiresHighResolution : 1;
		unsigned disableViewContentScaling : 1;
		unsigned singleUseLaunchOrientation : 3;
		unsigned defaultInterfaceOrientation : 3;
		unsigned supportedInterfaceOrientationsMask : 5;
		unsigned delegateWantsNextResponder : 1;
		unsigned isRunningInApplicationSwitcher : 1;
		unsigned isSendingEventForProgrammaticTouchCancellation : 1;
		unsigned delegateWantsStatusBarTouchesEnded : 1;
		unsigned interfaceLayoutDirectionIsValid : 1;
		unsigned interfaceLayoutDirection : 3;
		unsigned restorationExtended : 1;
		unsigned normalRestorationInProgress : 1;
		unsigned normalRestorationCompleted : 1;
		unsigned isDelayingTintViewChange : 1;
		unsigned isUpdatingTintViewColor : 1;
		unsigned isHandlingMemoryWarning : 1;
		unsigned forceStatusBarTintColorChanges : 1;
		unsigned disableLegacyAutorotation : 1;
	} _applicationFlags;	// 88 = 0x58
	UIColor *_defaultTopNavBarTintColor;	// 104 = 0x68
	int _undoButtonIndex;	// 108 = 0x6c
	int _redoButtonIndex;	// 112 = 0x70
}
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x3470d975; S=0x3469bd39; 
@property(readonly, assign, nonatomic) int applicationState;	// G=0x345426c9; 
@property(assign, nonatomic) BOOL applicationSupportsShakeToEdit;	// G=0x3470d995; S=0x34591155; 
@property(readonly, assign, nonatomic) double backgroundTimeRemaining;	// G=0x3470fbb9; 
@property(assign) float backlightLevel;	// G=0x3470ead1; S=0x3470ea6d; converted property
@property(assign, nonatomic) id<UIApplicationDelegate> delegate;	// G=0x345e5731; S=0x3459304d; 
@property(assign) int doubleHeightMode;	// G=0x3470c23d; S=0x3470c229; converted property
@property(assign, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;	// G=0x3470aa61; S=0x345f684d; 
@property(assign) BOOL ignoresInteractionEvents;	// G=0x3470e979; S=0x345d7151; converted property
@property(readonly, assign, nonatomic) UIWindow *keyWindow;	// G=0x345e5745; 
@property(assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;	// G=0x3470bacd; S=0x3460aaa5; 
@property(readonly, assign, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;	// G=0x3461f4ad; 
@property(assign, nonatomic, getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;	// G=0x34711825; S=0x347117ed; 
@property(retain) id scheduledLocalNotifications;	// G=0x3470f9a1; S=0x3470f985; converted property
@property(readonly, retain) UIStatusBar *statusBar;	// G=0x34542e75; converted property
@property(readonly, assign, nonatomic) CGRect statusBarFrame;	// G=0x34608a05; 
@property(assign, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;	// G=0x345965a1; S=0x345b0c55; 
@property(assign, nonatomic) int statusBarOrientation;	// G=0x3454251d; S=0x3470be95; 
@property(readonly, assign, nonatomic) double statusBarOrientationAnimationDuration;	// G=0x346c7871; 
@property(assign, nonatomic) int statusBarStyle;	// G=0x3459426d; S=0x345d94e1; 
@property(readonly, retain) UIStatusBarWindow *statusBarWindow;	// G=0x3470bae5; converted property
@property(readonly, assign, nonatomic) int userInterfaceLayoutDirection;	// G=0x345525ed; 
@property(assign) BOOL usesBackgroundNetwork;	// G=0x3470cf49; S=0x3469bc95; converted property
@property(readonly, assign, nonatomic) NSArray *windows;	// G=0x345fc6e9; 
+ (void)_installAfterCACommitHandler;	// 0x3470abb5
+ (BOOL)_isAfterCACommitHandlerInstalled;	// 0x345a4f95
+ (void)_noteInterfaceOrientationChangingTo:(int)to;	// 0x3470aae1
+ (void)_startStatusBarServerIfNecessary;	// 0x34590a15
+ (void)_startWindowServerIfNecessary;	// 0x34590881
+ (int)barStyleForString:(id)string;	// 0x3470da89
+ (int)interfaceOrientationForString:(id)string;	// 0x34591d1d
+ (BOOL)isRunningEventPump;	// 0x3470c44d
+ (BOOL)isRunningInStoreDemoMode;	// 0x3470aa21
+ (BOOL)registerAsSystemApp;	// 0x34590871
+ (BOOL)rendersLocally;	// 0x34590a11
+ (id)sharedApplication;	// 0x3453d945
+ (BOOL)shouldMakeUIForDefaultPNG;	// 0x34572bf9
+ (int)statusBarStyleForString:(id)string;	// 0x34591c09
+ (id)stringForBarStyle:(int)barStyle;	// 0x3470da59
+ (id)stringForInterfaceOrientation:(int)interfaceOrientation;	// 0x3470daf9
+ (id)stringForStatusBarStyle:(int)statusBarStyle;	// 0x3470da25
- (id)init;	// 0x34590ba5
- (BOOL)_accessibilityApplicationIsSystemWideServer;	// 0x34593add
- (Class)_accessibilityBundlePrincipalClass;	// 0x3461f559
- (BOOL)_accessibilityCaptureSimulatorEvent:(GSEventRef)event;	// 0x347dadad
- (void)_accessibilityInit;	// 0x34593859
- (void)_accessibilitySetUpQuickSpeak;	// 0x345bfa45
- (id)_accessibilitySettingsBundle;	// 0x3461f4c5
- (void)_accessibilityStatusChanged:(id)changed;	// 0x346751d9
- (void)_addAfterCACommitBlockForViewController:(id)viewController;	// 0x345a4fc1
- (void)_addRecorder:(id)recorder;	// 0x3470eec1
- (void)_addViewControllerForLockingStatusBarTintColor:(id)lockingStatusBarTintColor;	// 0x34628869
- (void)_alertSheetStackChanged;	// 0x3468de8d
- (BOOL)_alertWindowShouldRotate;	// 0x3470e1f9
- (BOOL)_applicationLaunchesIntoPortrait;	// 0x34591ea1
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;	// 0x3470cea1
- (void)_applicationOpenURL:(id)url payload:(id)payload;	// 0x3470cd61
- (id)_applicationProxyForURLScheme:(id)urlscheme publicURLsOnly:(BOOL)only;	// 0x346b8f21
- (id)_backgroundModes;	// 0x3470fc11
- (void)_beginShowingNetworkActivityIndicator;	// 0x3470fa1d
- (void)_bringContextToFront:(id)front;	// 0x3459beb5
- (void)_callApplicationResumeHandlersForURL:(id)url payload:(id)payload;	// 0x346e5b59
- (void)_callInitializationDelegatesForURL:(id)url payload:(id)payload suspended:(BOOL)suspended;	// 0x3459c505
- (BOOL)_canOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x346b8eb9
- (BOOL)_canShowTextServices;	// 0x3470ffd5
- (void)_cancelAllTouches;	// 0x345c7b95
- (void)_cancelCurrentTouchEvent;	// 0x3470ea15
- (void)_cancelGestureRecognizers:(id)recognizers;	// 0x3456acbd
- (void)_cancelGestureRecognizersForView:(id)view;	// 0x3456ac8d
- (void)_cancelTouches:(id)touches withEvent:(id)event;	// 0x345c7be9
- (void)_cancelTouches:(id)touches withEvent:(id)event includingGestures:(BOOL)gestures notificationBlock:(id)block;	// 0x345c7c45
- (void)_cancelUnfinishedTouchesForEvent:(id)event;	// 0x3468f06d
- (void)_cancelViewProcessingOfTouches:(id)touches withEvent:(id)event sendingTouchesCancelledToViewsOfTouches:(id)touches3;	// 0x3465d905
- (void)_clearTouchesForView:(id)view;	// 0x3455cfa5
- (CGImageRef)_createDefaultImageSnapshot;	// 0x3470cfc1
- (void)_createHangTracerTimerWithDuration:(double)duration;	// 0x3470ad51
- (void)_createStatusBarWithRequestedStyle:(int)requestedStyle orientation:(int)orientation hidden:(BOOL)hidden;	// 0x345951bd
- (int)_currentExpectedInterfaceOrientation;	// 0x345a5875
- (id)_currentTests;	// 0x34606b4d
- (double)_currentTintViewDuration;	// 0x34596cb9
- (id)_currentTintViewWindow;	// 0x34596bc1
- (void)_deactivateForReason:(int)reason;	// 0x345c7af9
- (void)_deactivateForReason:(int)reason notify:(BOOL)notify;	// 0x3459116d
- (id)_defaultTopNavBarTintColor;	// 0x3470c389
- (BOOL)_didEatCurrentTouch;	// 0x3454ce79
- (BOOL)_doRestorationIfNecessary;	// 0x3459cee9
- (void)_dumpScreenContents:(GSEventRef)contents;	// 0x3470ec31
- (void)_dumpUIHierarchy:(GSEventRef)hierarchy;	// 0x3470eb49
- (void)_eatCurrentTouch;	// 0x346885b1
- (void)_endShowingNetworkActivityIndicator;	// 0x3470faa9
- (id)_event;	// 0x3453c871
- (id)_exclusiveTouchWindows;	// 0x3454fc4d
- (BOOL)_executableWasLinkedWithUIKit;	// 0x3470fb9d
- (id)_extendLaunchTest;	// 0x345be139
- (id)_fallbackPresentationViewController;	// 0x3470ff69
- (void)_fetchInfoPlistFlags;	// 0x34591389
- (int)_frontMostAppOrientation;	// 0x345b537d
- (unsigned)_frontmostApplicationPort;	// 0x3470c449
- (id)_getHangTracerConnection;	// 0x3470ac5d
- (int)_getSpringBoardOrientation;	// 0x3470e551
- (void *)_getSymbol:(id)symbol forFramework:(id)framework;	// 0x3461f7b9
- (void)_handleAccessoryKeyStateChanged:(GSEventRef)changed;	// 0x3470c5dd
- (void)_handleApplicationResumeEvent:(GSEventRef)event;	// 0x346e4de1
- (void)_handleApplicationSuspend:(GSEventRef)suspend eventInfo:(void *)info;	// 0x345c7139
- (BOOL)_handleDelegateCallbacksWithOptions:(id)options isSuspended:(BOOL)suspended restoreState:(BOOL)state;	// 0x3459cd25
- (void)_handleHeadsetButtonClick;	// 0x3470cab5
- (void)_handleHeadsetButtonDoubleClick;	// 0x3470cb2d
- (void)_handleHeadsetButtonDown:(GSEventRef)down;	// 0x3470c93d
- (void)_handleHeadsetButtonTripleClick;	// 0x3470cbb5
- (void)_handleHeadsetButtonUp:(GSEventRef)up;	// 0x3470c965
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x34669d2d
- (void)_handleUserDefaultsDidChange:(id)_handleUserDefaults;	// 0x345c1c51
- (BOOL)_hasApplicationCalledLaunchDelegate;	// 0x345bbdbd
- (BOOL)_hasNormalRestorationCompleted;	// 0x3470aacd
- (BOOL)_hasStatusBarTintColorLockingController;	// 0x34596a2d
- (BOOL)_hasStoryboard;	// 0x3459c469
- (void)_hideNetworkActivityIndicator;	// 0x3470fa09
- (void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)mode;	// 0x34593ef1
- (BOOL)_isActivated;	// 0x3454273d
- (BOOL)_isAutorotationDisabledForAppWindows;	// 0x3470f4d9
- (BOOL)_isClassic;	// 0x3454cb25
- (BOOL)_isHandlingMemoryWarning;	// 0x3459d9a1
- (BOOL)_isInteractionEvent:(GSEventRef)event;	// 0x345bf915
- (BOOL)_isLaunchedSuspended;	// 0x346e558d
- (BOOL)_isMotionEvent:(GSEventRef)event;	// 0x3453c859
- (BOOL)_isNormalRestorationInProgress;	// 0x3470aa79
- (BOOL)_isRestorationExtended;	// 0x3470aa91
- (BOOL)_isResuming;	// 0x346e5579
- (BOOL)_isSendingEventForProgrammaticTouchCancellation;	// 0x3454f6f9
- (BOOL)_isSensitiveUIEnabled;	// 0x3470eaa5
- (BOOL)_isSpringBoard;	// 0x34552f5d
- (BOOL)_isSpringBoardShowingAnAlert;	// 0x3459c495
- (BOOL)_isStatusBarTintColorLocked;	// 0x345969e1
- (BOOL)_isTouchEvent:(GSEventRef)event;	// 0x3453c815
- (BOOL)_isTrackingAnyTouch;	// 0x346d7075
- (BOOL)_isViewContentScalingDisabled;	// 0x3470f9d5
- (BOOL)_isWindowServerHostingManaged;	// 0x34597bbd
- (id)_launchTestName;	// 0x34606cb5
- (void)_leak;	// 0x347531a5
- (BOOL)_legacyAutorotationIsDisabled;	// 0x34591f45
- (int)_loadMainInterfaceFile;	// 0x3459c2fd
- (int)_loadMainNibFileNamed:(id)named bundle:(id)bundle;	// 0x3470b84d
- (int)_loadMainStoryboardFileNamed:(id)named bundle:(id)bundle;	// 0x3470b8a9
- (id)_localCachesDirectory;	// 0x3470cf69
- (id)_mainStoryboardName;	// 0x3459c3f1
- (id)_motionEvent;	// 0x3470dbf9
- (id)_motionKeyWindow;	// 0x3470f289
- (BOOL)_needsShakesWhenInactive;	// 0x3470f1a5
- (void)_noteAnimationFinished:(id)finished;	// 0x34752581
- (void)_noteAnimationStarted:(id)started;	// 0x34752505
- (void)_notifyDidChangeStatusBarFrame:(CGRect)_notify;	// 0x346c7ef5
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)animationDuration;	// 0x346c8e39
- (void)_notifyWillChangeStatusBarFrame:(CGRect)_notify;	// 0x346c7cc5
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;	// 0x3470db41
- (id)_pathForFrameworkName:(id)frameworkName inPrivate:(BOOL)aPrivate;	// 0x3461f8a9
- (void)_performMemoryWarning;	// 0x346965e9
- (void)_playbackEvents:(id)events atPlaybackRate:(float)playbackRate messageWhenDone:(id)done withSelector:(SEL)selector;	// 0x34675295
- (void)_playbackTimerCallback:(id)callback;	// 0x34675599
- (void)_popStatusBarTintColorLock;	// 0x3470c3ad
- (void)_popTintViewDuration;	// 0x345d7345
- (void)_postSimpleRemoteNotificationForAction:(int)action andContext:(int)context;	// 0x3470c82d
- (void)_postSimpleRemoteNotificationForAction:(int)action andContext:(int)context trackID:(id)anId;	// 0x3470c875
- (void)_processScriptEvent:(GSEventRef)event;	// 0x346751ed
- (void)_purgeSharedInstances;	// 0x345c8e8d
- (CFMessagePortRef)_purplePPTServerPort;	// 0x345c0079
- (void)_pushStatusBarTintColorLock;	// 0x3470c399
- (void)_pushTintViewDuration:(double)duration;	// 0x345d7235
- (void)_queuePostFlushAnimation:(id)animation;	// 0x3470abc5
- (void)_receivedMemoryNotification;	// 0x34696535
- (void)_registerForAlertItemStateChangeNotification;	// 0x34593c89
- (void)_registerForEncodeLayerTreeNotification;	// 0x34593d11
- (void)_registerForKeyBagLockStatusNotification;	// 0x34593cc9
- (void)_registerForLanguageChangedNotification;	// 0x34593bc5
- (void)_registerForLocaleChangedNotification;	// 0x34593c41
- (void)_registerForLocaleWillChangeNotification;	// 0x34593c05
- (void)_registerForSignificantTimeChangeNotification;	// 0x34593b89
- (void)_registerForUserDefaultsChanges;	// 0x34593b29
- (id)_remoteControlEvent;	// 0x3470dd71
- (void)_removeDefaultInterfaceOrientatationOverride;	// 0x3470db55
- (void)_removeRecorder:(id)recorder;	// 0x3470ef21
- (void)_removeSnapshotImage;	// 0x346e5e7d
- (void)_removeViewControllerForLockingStatusBarTintColor:(id)lockingStatusBarTintColor;	// 0x34699f9d
- (void)_reportAppLaunchFinished;	// 0x345af3f1
- (void)_reportResults:(id)results;	// 0x345bfd41
- (BOOL)_requiresHighResolution;	// 0x3470f9d9
- (void)_restoreApplicationPreservationState;	// 0x34710e35
- (id)_rootViewControllers;	// 0x3470f3b1
- (BOOL)_rotationDisabledDuringTouch;	// 0x3454fc5d
- (void)_run;	// 0x34593531
- (void)_runWithURL:(id)url payload:(id)payload launchOrientation:(int)orientation statusBarStyle:(int)style statusBarHidden:(BOOL)hidden;	// 0x345948d9
- (void)_saveApplicationPreservationState:(id)state;	// 0x34710269
- (void)_saveApplicationPreservationStateIfSupported;	// 0x345c8629
- (BOOL)_saveSnapshotWithName:(id)name;	// 0x345c87c9
- (void)_scrollsToTopInitiatorView:(id)topInitiatorView touchesEnded:(id)ended withEvent:(id)event;	// 0x34704239
- (void)_sendMotionBegan:(int)began;	// 0x3470dc09
- (void)_sendMotionCancelled:(int)cancelled;	// 0x3470dcf9
- (void)_sendMotionEnded:(int)ended;	// 0x3470dc81
- (void)_sendOrderedOutContextsAndInvalidate:(BOOL)invalidate;	// 0x3470f639
- (void)_sendRemoteControlEvent:(int)event;	// 0x3470dd81
- (void)_sendWillEnterForegroundCallbacks;	// 0x346e55a1
- (void)_setDefaultTopNavBarTintColor:(id)color;	// 0x345d95a9
- (void)_setDelegate:(id)delegate assumeOwnership:(BOOL)ownership;	// 0x346089b9
- (void)_setHandlingURL:(BOOL)url url:(id)url2;	// 0x346e5e15
- (void)_setIgnoreHeadsetClicks:(BOOL)clicks;	// 0x3470fb51
- (void)_setIsClassic:(BOOL)classic;	// 0x34594331
- (void)_setRestorationExtended:(BOOL)extended;	// 0x3470aaa9
- (void)_setRotationDisabledDuringTouch:(BOOL)touch;	// 0x3460abed
- (void)_setShouldFixMainThreadPriority:(BOOL)_set;	// 0x3470a91d
- (void)_setShouldZoom:(BOOL)_set;	// 0x3459440d
- (void)_setStatusBarMode:(int)mode;	// 0x3470dbe1
- (void)_setStatusBarOrientation:(int)orientation;	// 0x3470bdf9
- (void)_setStatusBarOrientation:(int)orientation animated:(BOOL)animated;	// 0x3470bd8d
- (void)_setStatusBarShowsProgress:(BOOL)progress;	// 0x34585551
- (void)_setSupportedInterfaceOrientationsIsEnabled:(BOOL)enabled;	// 0x3470c065
- (void)_setSuspended:(BOOL)suspended;	// 0x345c7b11
- (void)_setSuspendedEventsOnly:(BOOL)only;	// 0x3470c3d5
- (void)_setSuspendedUnderLock:(BOOL)lock;	// 0x345c7a61
- (void)_setTopNavBarTintColor:(id)color withDuration:(double)duration;	// 0x34596d5d
- (void)_setTouchMap:(CFDictionaryRef)map;	// 0x3454ecf5
- (void)_setUserDefaultsSyncEnabled:(BOOL)enabled;	// 0x345fb9f1
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)_sheetWithRemoteIdentifier;	// 0x347f3a85
- (BOOL)_shouldHandleTestURL:(id)url;	// 0x345c6ca5
- (BOOL)_shouldIgnoreHeadsetClicks;	// 0x3470fb69
- (BOOL)_shouldTintStatusBar;	// 0x3459688d
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x345aec45
- (BOOL)_shouldUseKeyWindowStack;	// 0x3455376d
- (BOOL)_shouldUseNextFirstResponder;	// 0x345536a1
- (BOOL)_shouldZoom;	// 0x3470f9bd
- (void)_showEditAlertView;	// 0x3470dfed
- (void)_showEditAlertViewWithUndoManager:(id)undoManager window:(id)window;	// 0x3470dddd
- (id)_showServiceForText:(id)text type:(int)type fromRect:(CGRect)rect inView:(id)view;	// 0x3470fff9
- (void)_startHangTracer;	// 0x3470b039
- (void)_startPlaybackTimer;	// 0x346754e9
- (void)_stopDeactivatingForReason:(int)reason;	// 0x345aeced
- (void)_stopHangTracer;	// 0x3470af29
- (void)_stopPlayback;	// 0x3470edd1
- (unsigned)_supportedInterfaceOrientationsForWindow:(id)window;	// 0x345d2fbd
- (BOOL)_supportedInterfaceOrientationsIsEnabled;	// 0x34591dc9
- (BOOL)_supportsShakesWhenNotActive;	// 0x345c80fd
- (id)_targetInChainForAction:(SEL)action sender:(id)sender;	// 0x346a8849
- (BOOL)_taskSuspendingUnsupported;	// 0x3470f9f1
- (void)_terminateWithStatus:(int)status;	// 0x345cb065
- (CFDictionaryRef)_touchMap;	// 0x3453c8e1
- (id)_touchesEvent;	// 0x3454c7d1
- (void)_unregisterForLanguageChangedNotification;	// 0x3470b645
- (void)_unregisterForLocaleChangedNotification;	// 0x3470b66d
- (void)_unregisterForSignificantTimeChangeNotification;	// 0x3470b61d
- (void)_unregisterForTimeChangedNotification;	// 0x3470b695
- (void)_unregisterForUserDefaultsChanges;	// 0x3470ea1d
- (void)_updateAccessibilityItunesSettings;	// 0x347dadb1
- (void)_updateAccessibilitySettingsLoader;	// 0x345939c9
- (void)_updateApplicationAccessibility;	// 0x34593a41
- (void)_updateCurrentTintViewColor;	// 0x34596909
- (void)_updateCurrentTintViewForWindow:(id)window;	// 0x34596805
- (BOOL)_updateDefaultImage;	// 0x345c878d
- (void)_updateLargeTextNotification;	// 0x34593ab9
- (void)_updateOrientation;	// 0x345bf9a9
- (BOOL)_usesEmoji;	// 0x3470e975
- (BOOL)_usesPreMTAlertBehavior;	// 0x3468e16d
- (int)_validateStatusBarStyle:(int)style;	// 0x34552efd
- (void)_wakeTimerFired;	// 0x3470fcb9
- (void)_writeApplicationDefaultPNGSnapshot;	// 0x3470d249
- (void)acceleratedInX:(float)x Y:(float)y Z:(float)z;	// 0x3470c5d5
- (void)accessoryKeyStateChanged:(GSEventRef)changed;	// 0x3470c81d
- (int)activeInterfaceOrientation;	// 0x3470e535
- (void)addStatusBarImageNamed:(id)named;	// 0x3470d7d1
- (void)addStatusBarImageNamed:(id)named removeOnExit:(BOOL)exit;	// 0x3470d86d
- (void)addStatusBarItem:(int)item;	// 0x346b7ac9
- (void)addStatusBarItem:(int)item removeOnExit:(BOOL)exit;	// 0x3470d939
- (void)addStatusBarStyleOverrides:(int)overrides;	// 0x3470c079
- (void)addWebClipToHomeScreen:(id)homeScreen;	// 0x3470d9ad
- (int)alertInterfaceOrientation;	// 0x3468e15d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3470e0bd
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x3470e179
- (void)alertViewCancel:(id)cancel;	// 0x3470e1b9
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;	// 0x3470c511
- (void)applicationDidBeginSuspendAnimation;	// 0x345c7131
- (void)applicationDidEndResumeAnimation;	// 0x345fb19d
- (void)applicationDidOrderOutContext:(id)application;	// 0x34597fb5
- (void)applicationDidResume;	// 0x346e5b0d
- (void)applicationDidResumeForEventsOnly;	// 0x3470c3d1
- (void)applicationDidResumeFromUnderLock;	// 0x3470c3c9
- (void)applicationExited:(GSEventRef)exited;	// 0x3470c4bd
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x3470d975
- (void)applicationOpenToShortCut:(id)shortCut;	// 0x3470cd59
- (void)applicationOpenURL:(id)url;	// 0x3470cd5d
- (void)applicationResume:(GSEventRef)resume;	// 0x346e5b15
- (CGRect)applicationSnapshotRectForOrientation:(int)orientation;	// 0x345c8c91
// declared property getter: - (int)applicationState;	// 0x345426c9
// declared property getter: - (BOOL)applicationSupportsShakeToEdit;	// 0x3470d995
- (void)applicationSuspend:(GSEventRef)suspend;	// 0x34601631
- (void)applicationSuspended:(GSEventRef)suspended;	// 0x3470c4b5
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;	// 0x3470c4b9
- (void)applicationWillOrderInContext:(id)application windowLevel:(float)level windowOutput:(int)output;	// 0x34597bc1
- (void)applicationWillSuspend;	// 0x345c809d
- (void)applicationWillSuspendForEventsOnly;	// 0x3470c3c1
- (void)applicationWillSuspendUnderLock;	// 0x3470c3c5
- (void)applicationWillTerminate;	// 0x345cb23d
// declared property getter: - (double)backgroundTimeRemaining;	// 0x3470fbb9
// converted property getter: - (float)backlightLevel;	// 0x3470ead1
- (void)batteryStatusDidChange:(id)batteryStatus;	// 0x3468a42d
- (unsigned)beginBackgroundTaskWithExpirationHandler:(id)expirationHandler;	// 0x345fafc1
- (void)beginIgnoringInteractionEvents;	// 0x345b3579
- (void)beginReceivingRemoteControlEvents;	// 0x34606cfd
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info;	// 0x347f3659
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application;	// 0x347f3685
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application opaque:(BOOL)opaque presentAnimated:(BOOL)animated;	// 0x347f36f5
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application presentAnimated:(BOOL)animated;	// 0x347f36bd
- (unsigned)blockInteractionEventsCount;	// 0x345d713d
- (BOOL)canOpenURL:(id)url;	// 0x3470cd41
- (BOOL)canShowAlerts;	// 0x3468ef8d
- (void)cancelAllLocalNotifications;	// 0x3470f969
- (void)cancelLocalNotification:(id)notification;	// 0x3470f94d
- (void)clamshellDidClose:(GSEventRef)clamshell;	// 0x3470c541
- (void)clamshellDidOpen:(GSEventRef)clamshell;	// 0x3470c53d
- (void)clearKeepAliveTimeout;	// 0x3470fda1
- (void)completeStateRestoration;	// 0x34710e31
- (void)dealloc;	// 0x3470a931
- (id)defaultFirstResponder;	// 0x3470f39d
- (double)defaultImageSnapshotExpiration;	// 0x345c7a29
// declared property getter: - (id)delegate;	// 0x345e5731
- (void)didDismissActionSheet;	// 0x3470f831
- (void)didDismissMiniAlert;	// 0x3469516d
- (void)didReceiveMemoryWarning;	// 0x34696695
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;	// 0x346d1d7d
- (id)displayIdentifier;	// 0x34585195
// converted property getter: - (int)doubleHeightMode;	// 0x3470c23d
- (void)enableFramebufferStatisticsGathering;	// 0x34697115
- (unsigned)enabledRemoteNotificationTypes;	// 0x3470f859
- (void)endBackgroundTask:(unsigned)task;	// 0x34554905
- (void)endIgnoringInteractionEvents;	// 0x345bb4b9
- (void)endReceivingRemoteControlEvents;	// 0x346b8a91
- (void)endRemoteSheet:(id)sheet;	// 0x347f3925
- (void)endRemoteSheet:(id)sheet returnCode:(int)code;	// 0x347f3939
- (void)endRemoteSheet:(id)sheet returnCode:(int)code dismissAnimated:(BOOL)animated;	// 0x347f395d
- (void)extendStateRestoration;	// 0x34710e29
- (void)failedTest:(id)test;	// 0x34752e09
- (void)failedTest:(id)test withResults:(id)results;	// 0x34752e1d
- (void)finishedSubTest:(id)test forTest:(id)test2;	// 0x34752a89
- (void)finishedTest:(id)test;	// 0x34752dbd
- (void)finishedTest:(id)test extraResults:(id)results;	// 0x345be141
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification;	// 0x34752de5
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification withTeardownBlock:(id)teardownBlock;	// 0x345be169
- (void)finishedTest:(id)test extraResults:(id)results withTeardownBlock:(id)teardownBlock;	// 0x3460c6c1
- (BOOL)firstLaunchAfterBoot;	// 0x3470aa51
- (BOOL)handleDoubleHeightStatusBarTap:(int)tap;	// 0x3470bae1
- (BOOL)handleEvent:(GSEventRef)event;	// 0x3470f18d
- (BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;	// 0x3453cb95
- (void)handleKeyEvent:(GSEventRef)event;	// 0x34669cb5
- (BOOL)handleTestURL:(id)url;	// 0x345c6d21
- (void)headsetAvailabilityChanged:(GSEventRef)changed;	// 0x3470c525
- (void)headsetButtonDown:(GSEventRef)down;	// 0x3470c51d
- (void)headsetButtonUp:(GSEventRef)up;	// 0x3470c521
- (BOOL)homeScreenCanAddIcons;	// 0x3470da05
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x3470e979
- (int)interfaceOrientation;	// 0x345b5391
- (BOOL)isHandlingOpenShortCut;	// 0x3470cec1
- (BOOL)isHandlingURL;	// 0x345a5b01
// declared property getter: - (BOOL)isIdleTimerDisabled;	// 0x3470aa61
- (BOOL)isIgnoringInteractionEvents;	// 0x3453c8f1
- (BOOL)isLocked;	// 0x34692c0d
// declared property getter: - (BOOL)isNetworkActivityIndicatorVisible;	// 0x3470bacd
- (BOOL)isPasscodeRequiredToUnlock;	// 0x346887c9
// declared property getter: - (BOOL)isProtectedDataAvailable;	// 0x3461f4ad
// declared property getter: - (BOOL)isProximitySensingEnabled;	// 0x34711825
- (BOOL)isRunningInTaskSwitcher;	// 0x34608695
- (BOOL)isRunningQuitTest;	// 0x345c928d
- (BOOL)isRunningSuspendTest;	// 0x345c92d5
- (BOOL)isRunningTest;	// 0x345f5d1d
- (BOOL)isRunningTest:(id)test;	// 0x34613fad
// declared property getter: - (BOOL)isStatusBarHidden;	// 0x345965a1
- (BOOL)isSuspended;	// 0x34542729
- (BOOL)isSuspendedEventsOnly;	// 0x345fb9dd
- (BOOL)isSuspendedUnderLock;	// 0x345c7b81
// declared property getter: - (id)keyWindow;	// 0x345e5745
- (BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;	// 0x3470d661
- (BOOL)launchedToTest;	// 0x34554a09
- (void)lockButtonDown:(GSEventRef)down;	// 0x3470c515
- (void)lockButtonUp:(GSEventRef)up;	// 0x3470c519
- (void)lockDevice:(GSEventRef)device;	// 0x3470c821
- (void)mediaKeyDown:(GSEventRef)down;	// 0x3470c4c1
- (void)mediaKeyUp:(GSEventRef)up;	// 0x3470c50d
- (void)menuButtonDown:(GSEventRef)down;	// 0x3470c529
- (void)menuButtonUp:(GSEventRef)up;	// 0x3470c52d
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x3470e1fd
- (id)nameOfDefaultImageToUpdateAtSuspension;	// 0x345c87c5
- (id)nextResponder;	// 0x34541d45
- (BOOL)openURL:(id)url;	// 0x346b8e19
- (id)pathToDefaultImageNamed:(id)defaultImageNamed;	// 0x345ff009
- (void)performDisablingStatusBarStyleValidation:(id)validation;	// 0x346053c9
- (void)popRunLoopMode:(id)mode;	// 0x3467c21d
- (void)prepareForDefaultImageSnapshot;	// 0x345c8c61
- (void)presentLocalNotificationNow:(id)now;	// 0x3470f8b1
- (void)proximityStateChanged:(BOOL)changed;	// 0x3470c5d9
- (void)pushRunLoopMode:(id)mode;	// 0x34679691
- (void)quitTopApplication:(GSEventRef)application;	// 0x3470c825
- (void)registerForRemoteNotificationTypes:(unsigned)remoteNotificationTypes;	// 0x3470f875
- (void)removeDefaultImage:(id)image;	// 0x345fefd5
- (void)removeStatusBarImageNamed:(id)named;	// 0x3470d89d
- (void)removeStatusBarItem:(int)item;	// 0x346b7465
- (void)removeStatusBarStyleOverrides:(int)overrides;	// 0x3470c0c1
- (BOOL)reportApplicationSuspended;	// 0x345c931d
- (void)requestDeviceUnlock;	// 0x3470f845
- (void)resetIdleTimerAndUndim;	// 0x3470c829
- (id)resultsForTest:(id)test;	// 0x34752931
- (void)ringerChanged:(int)changed;	// 0x3470c539
- (BOOL)rotateIfNeeded:(int)needed;	// 0x3469b869
- (void)runModal:(id)modal;	// 0x346934b5
- (void)runTest:(id)test forAnimation:(id)animation;	// 0x34752699
- (BOOL)runTest:(id)test options:(id)options;	// 0x345c6fad
- (void)runTest:(id)test startingBeforeAnimation:(id)animation stoppingAfterAnimation:(id)animation3;	// 0x347526b5
- (void)scheduleLocalNotification:(id)notification;	// 0x3470f931
// converted property getter: - (id)scheduledLocalNotifications;	// 0x3470f9a1
- (void)sendAction:(SEL)action fromSender:(id)sender toTarget:(id)target forEvent:(GSEventRef)event;	// 0x3469ad1d
- (BOOL)sendAction:(SEL)action to:(id)to from:(id)from forEvent:(id)event;	// 0x346273c5
- (BOOL)sendAction:(SEL)action toTarget:(id)target fromSender:(id)sender forEvent:(id)event;	// 0x346273a1
- (void)sendEvent:(id)event;	// 0x3453c9cd
- (void)setApplicationBadgeString:(id)string;	// 0x345e56f1
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3469bd39
// declared property setter: - (void)setApplicationSupportsShakeToEdit:(BOOL)edit;	// 0x34591155
// converted property setter: - (void)setBacklightLevel:(float)level;	// 0x3470ea6d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3459304d
- (void)setDeviceOrientation:(int)orientation;	// 0x34753319
// converted property setter: - (void)setDoubleHeightMode:(int)mode;	// 0x3470c229
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled;	// 0x3470c141
- (void)setDoubleHeightPrefixText:(id)text;	// 0x3470c255
- (void)setDoubleHeightStatusText:(id)text;	// 0x3470c269
- (void)setDoubleHeightStatusText:(id)text forStyle:(int)style;	// 0x3470c125
- (void)setExpectsFaceContact:(BOOL)contact;	// 0x3470f5f9
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;	// 0x3470f60d
- (void)setGlowAnimationEnabled:(BOOL)enabled forStyle:(int)style;	// 0x3470c109
- (void)setHardwareKeyboardLayoutName:(id)name;	// 0x345b47d1
- (void)setHasMiniAlerts:(BOOL)alerts;	// 0x3468de79
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x345f684d
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x345d7151
- (BOOL)setKeepAliveTimeout:(double)timeout handler:(id)handler;	// 0x3470fcd9
// declared property setter: - (void)setNetworkActivityIndicatorVisible:(BOOL)visible;	// 0x3460aaa5
- (void)setNewsstandIconImage:(id)image;	// 0x3470d679
- (void)setProximityEventsEnabled:(BOOL)enabled;	// 0x3470eb05
// declared property setter: - (void)setProximitySensingEnabled:(BOOL)enabled;	// 0x347117ed
- (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x3459c259
// converted property setter: - (void)setScheduledLocalNotifications:(id)notifications;	// 0x3470f985
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x345b0c55
- (void)setStatusBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x34711859
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x345b0cf9
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters changeApplicationFlag:(BOOL)flag;	// 0x345b0d1d
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration;	// 0x346cfd7d
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration changeApplicationFlag:(BOOL)flag;	// 0x346cfda5
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;	// 0x345b0c69
- (void)setStatusBarMode:(int)mode duration:(float)duration;	// 0x3470e935
- (void)setStatusBarMode:(int)mode interfaceOrientation:(int)orientation duration:(float)duration;	// 0x3470e905
- (void)setStatusBarMode:(int)mode interfaceOrientation:(int)orientation duration:(float)duration fenceID:(int)anId;	// 0x3470e8c9
- (void)setStatusBarMode:(int)mode interfaceOrientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation;	// 0x3470e561
- (void)setStatusBarMode:(int)mode interfaceOrientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;	// 0x3470e5a9
// declared property setter: - (void)setStatusBarOrientation:(int)orientation;	// 0x3470be95
- (void)setStatusBarOrientation:(int)orientation animated:(BOOL)animated;	// 0x3470be0d
- (void)setStatusBarOrientation:(int)orientation animation:(int)animation duration:(double)duration;	// 0x3470bcdd
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x3470bcb9
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters notifySpringBoardAndFence:(BOOL)fence;	// 0x346c7899
- (void)setStatusBarShowsProgress:(BOOL)progress;	// 0x34585515
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x345d94e1
- (void)setStatusBarStyle:(int)style animated:(BOOL)animated;	// 0x345b11ed
- (void)setStatusBarStyle:(int)style animation:(int)animation;	// 0x3470bbe5
- (void)setStatusBarStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x3470baf9
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x34552e15
- (void)setStatusBarStyle:(int)style duration:(double)duration;	// 0x34552d81
- (void)setSuspensionAnimationDelay:(double)delay;	// 0x3470eb19
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled;	// 0x3470eb35
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;	// 0x346b7541
// converted property setter: - (void)setUsesBackgroundNetwork:(BOOL)network;	// 0x3469bc95
- (void)setWantsVolumeButtonEvents:(BOOL)events;	// 0x3470c545
- (BOOL)shouldFenceStatusBarRotation;	// 0x3470fb81
- (BOOL)shouldLaunchSafe;	// 0x345a5af1
- (BOOL)shouldRecordExtendedLaunchTime;	// 0x34606c1d
- (void)showNetworkPromptsIfNecessary:(BOOL)necessary;	// 0x3470cf31
- (void)showTTYPromptForNumber:(id)number withID:(int)anId;	// 0x3470ced5
- (void)significantTimeChange;	// 0x3470e999
- (void)startCHUDRecording:(id)recording;	// 0x34752fc5
- (void)startLeaking;	// 0x34753211
- (void)startedSubTest:(id)test forTest:(id)test2;	// 0x347529b5
- (void)startedTest:(id)test;	// 0x34594425
// converted property getter: - (id)statusBar;	// 0x34542e75
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;	// 0x3470e46d
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;	// 0x3454bf41
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;	// 0x3470e269
// declared property getter: - (CGRect)statusBarFrame;	// 0x34608a05
- (CGRect)statusBarFrameForOrientation:(int)orientation;	// 0x34608a45
- (float)statusBarHeight;	// 0x3459d299
- (float)statusBarHeightForOrientation:(int)orientation;	// 0x34596695
- (float)statusBarHeightForOrientation:(int)orientation ignoreHidden:(BOOL)hidden;	// 0x3470e4fd
- (int)statusBarMode;	// 0x3470db65
// declared property getter: - (int)statusBarOrientation;	// 0x3454251d
// declared property getter: - (double)statusBarOrientationAnimationDuration;	// 0x346c7871
- (void)statusBarReturnActionTap:(GSEventRef)tap;	// 0x3470c535
// declared property getter: - (int)statusBarStyle;	// 0x3459426d
// converted property getter: - (id)statusBarWindow;	// 0x3470bae5
- (void)stopCHUDRecording;	// 0x34753139
- (void)stopLeaking;	// 0x347532d5
- (void)stopModal;	// 0x346951d5
- (unsigned)supportedInterfaceOrientationsForWindow:(id)window;	// 0x345d3015
- (void)suspend;	// 0x3470c421
- (void)suspendReturningToLastApp:(BOOL)lastApp;	// 0x3470c435
- (BOOL)systemIsAnimatingApplicationLifecycleEvent;	// 0x3453c90d
- (void)terminateWithSuccess;	// 0x3470cd2d
- (void)testPrep:(id)prep options:(id)options;	// 0x34753315
- (void)unregisterForRemoteNotifications;	// 0x3470f891
- (void)updateSuspendedSettings:(id)settings;	// 0x345fb7e1
- (id)userCachesDirectory;	// 0x345f5cc1
- (void)userDefaultsDidChange:(id)userDefaults;	// 0x345c1cd9
- (id)userHomeDirectory;	// 0x345f6961
// declared property getter: - (int)userInterfaceLayoutDirection;	// 0x345525ed
- (id)userLibraryDirectory;	// 0x345f5bd1
// converted property getter: - (BOOL)usesBackgroundNetwork;	// 0x3470cf49
- (void)vibrateForDuration:(int)duration;	// 0x3470ea69
- (void)volumeChanged:(GSEventRef)changed;	// 0x3470c559
- (void)willDismissMiniAlert;	// 0x34694919
- (void)willDisplayMiniAlert;	// 0x346930e1
- (double)windowRotationDuration;	// 0x3468f9c1
// declared property getter: - (id)windows;	// 0x345fc6e9
@end
