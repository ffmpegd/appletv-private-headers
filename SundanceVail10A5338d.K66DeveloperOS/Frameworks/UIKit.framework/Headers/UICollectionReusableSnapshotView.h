/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UICollectionReusableView.h"
#import "UIKit-Structs.h"

@class UISnapshotView;

__attribute__((visibility("hidden")))
@interface UICollectionReusableSnapshotView : UICollectionReusableView {
	UISnapshotView *_snapshotView;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) UISnapshotView *snapshotView;	// G=0x30ffc4f5; @synthesize=_snapshotView
- (id)initWithFrame:(CGRect)frame;	// 0x30ffc3f5
- (void)dealloc;	// 0x30ffc4a9
// declared property getter: - (id)snapshotView;	// 0x30ffc4f5
@end
