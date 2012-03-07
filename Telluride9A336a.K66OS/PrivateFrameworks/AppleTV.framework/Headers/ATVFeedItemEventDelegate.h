/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BREventDelegate.h"
#import <NSObject.h> // Unknown library

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x33a03385; S=0x33a03399; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x33a02f4d
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x33a02fd1
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x33a030a5
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x33a03301
- (void)dealloc;	// 0x33a03045
- (BOOL)handlePlayForControl:(id)control;	// 0x33a03345
- (BOOL)handleSelectionForControl:(id)control;	// 0x33a03305
// declared property getter: - (id)merchant;	// 0x33a03385
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33a03399
@end

