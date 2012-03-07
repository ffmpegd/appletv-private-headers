/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BBBulletinTransaction : NSObject {
@private
	NSString *_bulletinID;	// 4 = 0x4
	unsigned _transactionID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *bulletinID;	// G=0x31492a61; @synthesize=_bulletinID
@property(readonly, assign, nonatomic) unsigned transactionID;	// G=0x31492a71; @synthesize=_transactionID
+ (id)transactionWithBulletinID:(id)bulletinID;	// 0x314928ad
- (id)initWithBulletinID:(id)bulletinID;	// 0x314928f5
// declared property getter: - (id)bulletinID;	// 0x31492a61
- (void)dealloc;	// 0x31492959
- (unsigned)incrementTransactionID;	// 0x314929a5
// declared property getter: - (unsigned)transactionID;	// 0x31492a71
@end

