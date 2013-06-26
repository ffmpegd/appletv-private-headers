/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import </libobjc.A.h>

@class UIPDFPageView, NSMutableArray;

@interface UIPDFPlacementController : NSObject {
	NSMutableArray *_popups;	// 4 = 0x4
	CGSize _viewSize;	// 8 = 0x8
	UIPDFPageView *pageView;	// 16 = 0x10
}
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x30637a11; S=0x30637a21; @synthesize
- (id)initWithAnnotations:(id)annotations viewSize:(CGSize)size;	// 0x30636e75
- (CGRect)boundsForObjectAtIndex:(unsigned)index;	// 0x30637055
- (void)dealloc;	// 0x30636ff5
- (void)layoutViews:(float)views;	// 0x306373ad
// declared property getter: - (id)pageView;	// 0x30637a11
// declared property setter: - (void)setPageView:(id)view;	// 0x30637a21
- (void)shift:(float)shift;	// 0x306372c9
- (id)viewAtIndex:(unsigned)index;	// 0x30637291
- (float)yForObjectAtIndex:(unsigned)index;	// 0x30637251
@end
