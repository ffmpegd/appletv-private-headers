/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, BBAssertion;

@interface BBResponse : NSObject <NSCoding> {
	BBAssertion *_lifeAssertion;	// 4 = 0x4
	id _sendBlock;	// 8 = 0x8
	NSString *_bulletinID;	// 12 = 0xc
	BOOL _deliverToPublisher;	// 16 = 0x10
	NSString *_actionKey;	// 20 = 0x14
	BOOL _sent;	// 24 = 0x18
	NSString *_replyText;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *actionKey;	// G=0x34267d8d; S=0x34267d9d; @synthesize=_actionKey
@property(retain, nonatomic) NSString *bulletinID;	// G=0x34267d39; S=0x34267d49; @synthesize=_bulletinID
@property(assign, nonatomic) BOOL deliverToPublisher;	// G=0x34267d6d; S=0x34267d7d; @synthesize=_deliverToPublisher
@property(retain, nonatomic) BBAssertion *lifeAssertion;	// G=0x34267cd1; S=0x34267ce1; @synthesize=_lifeAssertion
@property(copy, nonatomic) NSString *replyText;	// G=0x34267dc1; S=0x34267dd1; @synthesize=_replyText
@property(copy, nonatomic) id sendBlock;	// G=0x34267d05; S=0x34267d15; @synthesize=_sendBlock
- (id)initWithCoder:(id)coder;	// 0x34267b35
// declared property getter: - (id)actionKey;	// 0x34267d8d
// declared property getter: - (id)bulletinID;	// 0x34267d39
- (void)dealloc;	// 0x34267a5d
// declared property getter: - (BOOL)deliverToPublisher;	// 0x34267d6d
- (void)encodeWithCoder:(id)coder;	// 0x34267c19
// declared property getter: - (id)lifeAssertion;	// 0x34267cd1
// declared property getter: - (id)replyText;	// 0x34267dc1
- (void)send;	// 0x34267af9
// declared property getter: - (id)sendBlock;	// 0x34267d05
// declared property setter: - (void)setActionKey:(id)key;	// 0x34267d9d
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x34267d49
// declared property setter: - (void)setDeliverToPublisher:(BOOL)publisher;	// 0x34267d7d
// declared property setter: - (void)setLifeAssertion:(id)assertion;	// 0x34267ce1
// declared property setter: - (void)setReplyText:(id)text;	// 0x34267dd1
// declared property setter: - (void)setSendBlock:(id)block;	// 0x34267d15
@end

