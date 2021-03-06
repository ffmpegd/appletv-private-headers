/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSIndexPath, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
	UITableViewUpdateGap *_gap;	// 20 = 0x14
	BOOL _headerFooterOnly;	// 24 = 0x18
	BOOL _skipAnimation;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) int action;	// G=0x2f464fe1; @synthesize=_action
@property(assign, nonatomic) int animation;	// G=0x2f464f7d; S=0x2f6ee90d; @synthesize=_animation
@property(assign, nonatomic) UITableViewUpdateGap *gap;	// G=0x2f6ee93d; S=0x2f465255; @synthesize=_gap
@property(assign, nonatomic) BOOL headerFooterOnly;	// G=0x2f464f8d; S=0x2f464f9d; @synthesize=_headerFooterOnly
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x2f464f6d; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x2f6ee91d; S=0x2f6ee92d; @synthesize=_offset
@property(assign, nonatomic) BOOL skipAnimation;	// G=0x2f6ee94d; S=0x2f6ee95d; @synthesize=_skipAnimation
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x2f464eed
- (id)_actionDescription;	// 0x2f6ee8b5
// declared property getter: - (int)action;	// 0x2f464fe1
// declared property getter: - (int)animation;	// 0x2f464f7d
- (int)compareIndexPaths:(id)paths;	// 0x2f465291
- (void)dealloc;	// 0x2f418125
// declared property getter: - (id)gap;	// 0x2f6ee93d
// declared property getter: - (BOOL)headerFooterOnly;	// 0x2f464f8d
// declared property getter: - (id)indexPath;	// 0x2f464f6d
- (int)inverseCompareIndexPaths:(id)paths;	// 0x2f5252dd
- (BOOL)isSectionOperation;	// 0x2f464fad
// declared property getter: - (float)offset;	// 0x2f6ee91d
// declared property setter: - (void)setAnimation:(int)animation;	// 0x2f6ee90d
// declared property setter: - (void)setGap:(id)gap;	// 0x2f465255
// declared property setter: - (void)setHeaderFooterOnly:(BOOL)only;	// 0x2f464f9d
// declared property setter: - (void)setOffset:(float)offset;	// 0x2f6ee92d
// declared property setter: - (void)setSkipAnimation:(BOOL)animation;	// 0x2f6ee95d
// declared property getter: - (BOOL)skipAnimation;	// 0x2f6ee94d
@end

