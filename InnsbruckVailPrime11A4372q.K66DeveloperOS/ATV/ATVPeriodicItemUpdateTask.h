/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <AppleTVServices/ATVBackgroundTask.h>

@class BRMerchant, NSURL, ATVURLDocument, NSOperationQueue;
@protocol ATVUpdatable;

__attribute__((visibility("hidden")))
@interface ATVPeriodicItemUpdateTask : ATVBackgroundTask {
	NSURL *_url;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
	id<ATVUpdatable> _updatableItem;	// 12 = 0xc
	NSOperationQueue *_callersQueue;	// 16 = 0x10
	ATVURLDocument *_currentDocument;	// 20 = 0x14
}
@property(retain) BRMerchant *merchant;	// G=0x165db1; S=0x165dc5; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x165965; S=0x165955; 
@property(retain) NSURL *url;	// G=0x165d8d; S=0x165da1; @synthesize=_url
- (id)initWithType:(int)type interval:(double)interval delay:(double)delay;	// 0x165835
- (void)_urlDocReady:(id)ready;	// 0x165b0d
- (void)dealloc;	// 0x1658b1
// declared property getter: - (id)merchant;	// 0x165db1
- (BOOL)perform;	// 0x165975
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x165dc5
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x165955
// declared property setter: - (void)setUrl:(id)url;	// 0x165da1
// declared property getter: - (id)updatableItem;	// 0x165965
// declared property getter: - (id)url;	// 0x165d8d
@end

