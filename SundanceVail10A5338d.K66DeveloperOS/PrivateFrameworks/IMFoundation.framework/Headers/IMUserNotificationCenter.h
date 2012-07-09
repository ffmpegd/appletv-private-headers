/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject {
	NSMutableDictionary *_identifierToIMUserNotificationQueueMap;	// 4 = 0x4
	NSMutableDictionary *_identifierToListenerQueueMap;	// 8 = 0x8
	NSMutableDictionary *_identifierToBlockQueueMap;	// 12 = 0xc
	NSMutableDictionary *_identifierToRunLoopSourcesMap;	// 16 = 0x10
	NSMutableDictionary *_identifierToCFUserNotificationMap;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;	// G=0x369435f5; S=0x36943605; @synthesize=_identifierToBlockQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;	// G=0x36943635; S=0x36943645; @synthesize=_identifierToCFUserNotificationMap
@property(retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;	// G=0x369435b5; S=0x369435c5; @synthesize=_identifierToIMUserNotificationQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;	// G=0x369435d5; S=0x369435e5; @synthesize=_identifierToListenerQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;	// G=0x36943615; S=0x36943625; @synthesize=_identifierToRunLoopSourcesMap
+ (id)sharedInstance;	// 0x369423bd
- (void)_cancelActiveUserNotificationForIdentifier:(id)identifier;	// 0x36942b35
- (id)_dequeueBlockForIdentifier:(id)identifier;	// 0x3694273d
- (id)_dequeueListenerForIdentifier:(id)identifier;	// 0x36942689
- (id)_dequeueUserNotificationForIdentifier:(id)identifier;	// 0x369425b1
- (void)_displayNextUserNotificationForIdentifier:(id)identifier;	// 0x36942c4d
- (void)_enqueueBlock:(id)block forIdentifier:(id)identifier;	// 0x369429fd
- (void)_enqueueListener:(id)listener forIdentifier:(id)identifier;	// 0x36942919
- (void)_enqueueUserNotification:(id)notification forIdentifier:(id)identifier;	// 0x36942845
- (id)_frontBlockForIdentifier:(id)identifier;	// 0x36942579
- (id)_frontListenerForIdentifier:(id)identifier;	// 0x36942541
- (id)_frontUserNotificationForIdentifier:(id)identifier;	// 0x36942509
- (void)_handleUserNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x36942df1
- (void)addUserNotification:(id)notification listener:(id)listener;	// 0x36942fad
- (void)addUserNotification:(id)notification listener:(id)listener completionHandler:(id)handler;	// 0x36942fd1
- (unsigned)countForIdentifier:(id)identifier;	// 0x3694307d
- (void)dealloc;	// 0x36942469
// declared property getter: - (id)identifierToBlockQueueMap;	// 0x369435f5
// declared property getter: - (id)identifierToCFUserNotificationMap;	// 0x36943635
// declared property getter: - (id)identifierToIMUserNotificationQueueMap;	// 0x369435b5
// declared property getter: - (id)identifierToListenerQueueMap;	// 0x369435d5
// declared property getter: - (id)identifierToRunLoopSourcesMap;	// 0x36943615
- (void)removeAllListeners;	// 0x36943415
- (void)removeListener:(id)listener;	// 0x369430b5
// declared property setter: - (void)setIdentifierToBlockQueueMap:(id)blockQueueMap;	// 0x36943605
// declared property setter: - (void)setIdentifierToCFUserNotificationMap:(id)cfuserNotificationMap;	// 0x36943645
// declared property setter: - (void)setIdentifierToIMUserNotificationQueueMap:(id)imuserNotificationQueueMap;	// 0x369435c5
// declared property setter: - (void)setIdentifierToListenerQueueMap:(id)listenerQueueMap;	// 0x369435e5
// declared property setter: - (void)setIdentifierToRunLoopSourcesMap:(id)runLoopSourcesMap;	// 0x36943625
@end
