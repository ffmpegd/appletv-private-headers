/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "SBSCardItemsControllerRemoteInterface.h"

@class NSString;
@protocol SBCardItemsControllerRemoteInterface;

@interface SBSCardItemsController : NSObject <XPCProxyTarget, SBSCardItemsControllerRemoteInterface> {
	id<SBCardItemsControllerRemoteInterface> _remoteProxy;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
- (id)initWithIdentifier:(id)identifier;	// 0x343d9bfd
- (void)addCardItems:(id)items;	// 0x343d9dc5
- (void)clearAllCardItems;	// 0x343d9e55
- (void)dealloc;	// 0x343d9d21
- (void)getCardItemsWithHandler:(id)handler;	// 0x343d9e81
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x343d9d6d
- (void)removeCardItems:(id)items;	// 0x343d9df5
- (void)setCardItems:(id)items;	// 0x343d9e25
@end
