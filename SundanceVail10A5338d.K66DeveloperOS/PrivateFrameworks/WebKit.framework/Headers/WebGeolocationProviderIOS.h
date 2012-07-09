/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebGeolocationProvider.h"
#import "GeolocationUpdateListener.h"

@class WebGeolocationPosition, GeolocationCoreLocationDelegate;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider, GeolocationUpdateListener> {
	HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>> > m_webViewsWaitingForCoreLocationStart;	// 4 = 0x4
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > m_warmUpWebViews;	// 24 = 0x18
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > m_registeredWebViews;	// 44 = 0x2c
	GeolocationCoreLocationDelegate *_geolocationCoreLocationDelegate;	// 64 = 0x40
	WebGeolocationPosition *_lastPosition;	// 68 = 0x44
	BOOL _isSuspended;	// 72 = 0x48
	BOOL _enableHighAccuracy;	// 73 = 0x49
}
@property(assign, nonatomic) BOOL enableHighAccuracy;	// G=0x316a8cfd; S=0x316a7cf1; @synthesize=_enableHighAccuracy
@property(retain, nonatomic) GeolocationCoreLocationDelegate *geolocationCoreLocationDelegate;	// G=0x316a8cad; S=0x316a8cbd; @synthesize=_geolocationCoreLocationDelegate
@property(assign, nonatomic) BOOL isSuspended;	// G=0x316a8cdd; S=0x316a8ced; @synthesize=_isSuspended
@property(retain, nonatomic) WebGeolocationPosition *lastPosition;	// G=0x316a7ce1; S=0x316a8ccd; @synthesize=_lastPosition
+ (id)sharedGeolocationProvider;	// 0x316a7a09
- (id).cxx_construct;	// 0x316a8e41
- (void).cxx_destruct;	// 0x316a8d0d
- (void)cancelWarmUpForWebView:(id)webView;	// 0x316a7e81
- (void)dealloc;	// 0x316a79b1
// declared property getter: - (BOOL)enableHighAccuracy;	// 0x316a8cfd
- (void)errorOccurred:(id)occurred;	// 0x316a8b01
// declared property getter: - (id)geolocationCoreLocationDelegate;	// 0x316a8cad
- (void)geolocationDelegateStarted;	// 0x316a7fa1
- (void)geolocationDelegateUnableToStart;	// 0x316a850d
- (void)initializeGeolocationForWebView:(id)webView listener:(id)listener;	// 0x316a7d39
// declared property getter: - (BOOL)isSuspended;	// 0x316a8cdd
// declared property getter: - (id)lastPosition;	// 0x316a7ce1
- (void)positionChanged:(id)changed;	// 0x316a8959
- (void)registerWebView:(id)view;	// 0x316a7b65
- (void)resume;	// 0x316a7ed9
// declared property setter: - (void)setEnableHighAccuracy:(BOOL)accuracy;	// 0x316a7cf1
// declared property setter: - (void)setGeolocationCoreLocationDelegate:(id)delegate;	// 0x316a8cbd
// declared property setter: - (void)setIsSuspended:(BOOL)suspended;	// 0x316a8ced
// declared property setter: - (void)setLastPosition:(id)position;	// 0x316a8ccd
- (void)startCoreLocationDelegate;	// 0x316a7a69
- (void)stopCoreLocationDelegateIfNeeded;	// 0x316a7add
- (void)suspend;	// 0x316a7eb5
- (void)unregisterWebView:(id)view;	// 0x316a7c41
@end
