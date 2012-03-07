/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary;

@interface APSOutgoingMessage : NSObject {
	NSMutableDictionary *_objects;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isCritical) BOOL critical;	// G=0x310762b1; S=0x310762f1; 
@property(assign, nonatomic) unsigned identifier;	// G=0x310765a9; S=0x310765e9; 
@property(assign) unsigned messageID;	// G=0x31076085; S=0x310760c5; converted property
@property(assign, nonatomic) int payloadFormat;	// G=0x31076511; S=0x31076551; 
@property(assign, nonatomic) unsigned timeout;	// G=0x31076219; S=0x31076259; 
@property(retain) id timestamp;	// G=0x3107611d; S=0x31076145; converted property
@property(retain, nonatomic) NSString *topic;	// G=0x31076171; S=0x31076199; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x310761c5; S=0x310761ed; 
- (id)initWithData:(id)data;	// 0x31076991
- (id)initWithTopic:(id)topic userInfo:(id)info;	// 0x31076691
- (id)data;	// 0x310767bd
- (void)dealloc;	// 0x31076945
- (BOOL)hasTimedOut;	// 0x31076479
// declared property getter: - (unsigned)identifier;	// 0x310765a9
// declared property getter: - (BOOL)isCritical;	// 0x310762b1
// converted property getter: - (unsigned)messageID;	// 0x31076085
- (id)objectForKey:(id)key;	// 0x31076641
// declared property getter: - (int)payloadFormat;	// 0x31076511
- (void)setCancelled:(BOOL)cancelled;	// 0x31076421
// declared property setter: - (void)setCritical:(BOOL)critical;	// 0x310762f1
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x310765e9
// converted property setter: - (void)setMessageID:(unsigned)anId;	// 0x310760c5
- (void)setObject:(id)object forKey:(id)key;	// 0x31076665
// declared property setter: - (void)setPayloadFormat:(int)format;	// 0x31076551
- (void)setSent:(BOOL)sent;	// 0x31076389
- (void)setTimedOut:(BOOL)anOut;	// 0x310764b9
// declared property setter: - (void)setTimeout:(unsigned)timeout;	// 0x31076259
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x31076145
// declared property setter: - (void)setTopic:(id)topic;	// 0x31076199
// declared property setter: - (void)setUserInfo:(id)info;	// 0x310761ed
// declared property getter: - (unsigned)timeout;	// 0x31076219
// converted property getter: - (id)timestamp;	// 0x3107611d
// declared property getter: - (id)topic;	// 0x31076171
// declared property getter: - (id)userInfo;	// 0x310761c5
- (BOOL)wasCancelled;	// 0x310763e1
- (BOOL)wasSent;	// 0x31076349
@end

