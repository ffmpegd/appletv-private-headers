/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class ISReview;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
	BOOL _backgroundReview;	// 60 = 0x3c
	ISReview *_review;	// 64 = 0x40
}
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x33db3391; S=0x33db33a1; @synthesize=_backgroundReview
@property(retain) ISReview *review;	// G=0x33db33b1; S=0x33db33c5; @synthesize=_review
- (id)_httpBody;	// 0x33db3171
- (void)dealloc;	// 0x33db2e01
// declared property getter: - (BOOL)isBackgroundReview;	// 0x33db3391
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x33db3035
// declared property getter: - (id)review;	// 0x33db33b1
- (void)run;	// 0x33db2e4d
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x33db33a1
// declared property setter: - (void)setReview:(id)review;	// 0x33db33c5
@end

