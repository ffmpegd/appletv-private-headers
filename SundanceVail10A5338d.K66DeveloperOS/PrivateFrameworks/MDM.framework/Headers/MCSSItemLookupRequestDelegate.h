/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "SSItemLookupRequestDelegate.h"
#import "MCSSRequestDelegate.h"

@class NSArray, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {
	NSArray *_items;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) SSItemLookupRequest *request;	// @dynamic
+ (id)instance;	// 0x35123f51
- (void).cxx_destruct;	// 0x351241d9
- (void)itemLookupRequest:(id)request didFindItems:(id)items;	// 0x35124131
- (void)startCompletionBlock:(id)block;	// 0x35123fb9
@end
