/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSRequestDelegate.h"


@protocol SSPurchaseRequestDelegate <SSRequestDelegate>
@optional
- (void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
- (void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
@end

