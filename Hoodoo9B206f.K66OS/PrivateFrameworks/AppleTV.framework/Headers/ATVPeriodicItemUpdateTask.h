/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class BRURLDocument, NSURL, BRMerchant, NSOperationQueue;
@protocol ATVUpdatable;

@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
@private
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	BRURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x365f1691; S=0x365f16a5; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x365f1115; S=0x365f1105; 
@property(retain) NSURL *url;	// G=0x365f1659; S=0x365f166d; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x365f0fe5
- (void)_urlDocReady:(id)ready;	// 0x365f12b1
- (void)dealloc;	// 0x365f1061
// declared property getter: - (id)merchant;	// 0x365f1691
- (BOOL)perform:(id)perform;	// 0x365f1125
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x365f16a5
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x365f1105
// declared property setter: - (void)setUrl:(id)url;	// 0x365f166d
// declared property getter: - (id)updatableItem;	// 0x365f1115
// declared property getter: - (id)url;	// 0x365f1659
@end

