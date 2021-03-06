/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class DOMNode, UIWebDocumentView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView {
@private
	UIWebDocumentView *_webDocumentView;	// 408 = 0x198
	UIWebOverflowScrollListener *_scrollListener;	// 412 = 0x19c
	UIWebOverflowContentView *_overflowContentView;	// 416 = 0x1a0
	DOMNode *_node;	// 420 = 0x1a4
	BOOL _beingRemoved;	// 424 = 0x1a8
}
@property(assign, nonatomic, getter=isBeingRemoved) BOOL beingRemoved;	// G=0x356c791d; S=0x356c792d; @synthesize=_beingRemoved
@property(retain, nonatomic) DOMNode *node;	// G=0x356c78e9; S=0x356c78f9; @synthesize=_node
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView;	// G=0x356c78b5; S=0x356c78c5; @synthesize=_overflowContentView
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener;	// G=0x356c7881; S=0x356c7891; @synthesize=_scrollListener
@property(assign, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x356c7861; S=0x356c7871; @synthesize=_webDocumentView
- (id)initWithLayer:(id)layer node:(id)node webDocumentView:(id)view;	// 0x356c7409
- (void)_replaceLayer:(id)layer;	// 0x356c7725
- (void)dealloc;	// 0x356c7519
- (void)fixUpViewAfterInsertion;	// 0x356c766d
// declared property getter: - (BOOL)isBeingRemoved;	// 0x356c791d
// declared property getter: - (id)node;	// 0x356c78e9
// declared property getter: - (id)overflowContentView;	// 0x356c78b5
- (void)prepareForRemoval;	// 0x356c76e1
// declared property getter: - (id)scrollListener;	// 0x356c7881
// declared property setter: - (void)setBeingRemoved:(BOOL)removed;	// 0x356c792d
- (void)setContentOffset:(CGPoint)offset;	// 0x356c7799
// declared property setter: - (void)setNode:(id)node;	// 0x356c78f9
// declared property setter: - (void)setOverflowContentView:(id)view;	// 0x356c78c5
// declared property setter: - (void)setScrollListener:(id)listener;	// 0x356c7891
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x356c7871
- (id)superview;	// 0x356c759d
// declared property getter: - (id)webDocumentView;	// 0x356c7861
@end

