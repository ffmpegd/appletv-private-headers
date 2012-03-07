/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXNotificationHandler : NSObject {
	NSString *_notificationName;	// 4 = 0x4
	id _target;	// 8 = 0x8
	id _dispatcher;	// 12 = 0xc
	unsigned _observerIdentifier;	// 16 = 0x10
	BOOL _valid;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;	// G=0x3219289d; S=0x321928ad; 
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;	// G=0x321930fd; S=0x3219310d; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x32193131; S=0x32193141; @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x321930ed; @synthesize=_valid
+ (id)_safelyGetObserverForIdentifier:(unsigned)identifier;	// 0x32192f1d
+ (unsigned)_safelyRegisterObserver:(id)observer;	// 0x32192c65
+ (void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;	// 0x32192e4d
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;	// 0x32192715
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x32192739
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x321926b9
// declared property getter: - (id)_dispatcher;	// 0x3219289d
- (void)_handleNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x32192c25
// declared property getter: - (id)_notificationName;	// 0x321930fd
- (id)_notificationTypeDescription;	// 0x32192971
// declared property setter: - (void)_setDispatcher:(id)dispatcher;	// 0x321928ad
// declared property setter: - (void)_setNotificationName:(id)name;	// 0x3219310d
// declared property setter: - (void)_setTarget:(id)target;	// 0x32193141
- (void)_startObserving;	// 0x32192b01
- (void)_stopObserving;	// 0x32192b35
// declared property getter: - (id)_target;	// 0x32193131
- (void)dealloc;	// 0x3219285d
- (id)description;	// 0x321928e9
- (void)invalidate;	// 0x321929a5
// declared property getter: - (BOOL)isValid;	// 0x321930ed
- (void)processHandler:(SEL)handler;	// 0x32192b69
@end

