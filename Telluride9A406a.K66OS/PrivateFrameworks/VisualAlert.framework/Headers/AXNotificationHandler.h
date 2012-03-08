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
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;	// G=0x34b2e89d; S=0x34b2e8ad; 
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;	// G=0x34b2f0fd; S=0x34b2f10d; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x34b2f131; S=0x34b2f141; @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x34b2f0ed; @synthesize=_valid
+ (id)_safelyGetObserverForIdentifier:(unsigned)identifier;	// 0x34b2ef1d
+ (unsigned)_safelyRegisterObserver:(id)observer;	// 0x34b2ec65
+ (void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;	// 0x34b2ee4d
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;	// 0x34b2e715
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x34b2e739
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x34b2e6b9
// declared property getter: - (id)_dispatcher;	// 0x34b2e89d
- (void)_handleNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x34b2ec25
// declared property getter: - (id)_notificationName;	// 0x34b2f0fd
- (id)_notificationTypeDescription;	// 0x34b2e971
// declared property setter: - (void)_setDispatcher:(id)dispatcher;	// 0x34b2e8ad
// declared property setter: - (void)_setNotificationName:(id)name;	// 0x34b2f10d
// declared property setter: - (void)_setTarget:(id)target;	// 0x34b2f141
- (void)_startObserving;	// 0x34b2eb01
- (void)_stopObserving;	// 0x34b2eb35
// declared property getter: - (id)_target;	// 0x34b2f131
- (void)dealloc;	// 0x34b2e85d
- (id)description;	// 0x34b2e8e9
- (void)invalidate;	// 0x34b2e9a5
// declared property getter: - (BOOL)isValid;	// 0x34b2f0ed
- (void)processHandler:(SEL)handler;	// 0x34b2eb69
@end
