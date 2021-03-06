/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSubviewController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVCarouselViewDataSource.h"

@class ATVCarouselView, ATVFeedShowcaseCarouselViewUIDelegate, NSArray;
@protocol ATVCarouselViewUIDelegate;

__attribute__((visibility("hidden")))
@interface ATVCarouselViewController : XXUnknownSuperclass <ATVSubviewController, ATVCarouselViewDataSource> {
	ATVCarouselView *_carouselView;	// 4 = 0x4
	NSArray *_items;	// 8 = 0x8
	ATVFeedShowcaseCarouselViewUIDelegate *_uiDelegate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id<ATVCarouselViewUIDelegate> carouselUIDelegate;	// G=0x51873d; 
@property(retain, nonatomic) ATVCarouselView *carouselView;	// G=0x518ad5; S=0x518ae5; @synthesize=_carouselView
@property(retain, nonatomic) NSArray *items;	// G=0x518b0d; S=0x518b1d; @synthesize=_items
@property(retain, nonatomic) ATVFeedShowcaseCarouselViewUIDelegate *uiDelegate;	// G=0x518b45; S=0x518b55; @synthesize=_uiDelegate
- (id)init;	// 0x51866d
- (void).cxx_destruct;	// 0x518b7d
// declared property getter: - (id)carouselUIDelegate;	// 0x51873d
// declared property getter: - (id)carouselView;	// 0x518ad5
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x518a0d
// declared property getter: - (id)items;	// 0x518b0d
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x5189d1
// declared property setter: - (void)setCarouselView:(id)view;	// 0x518ae5
// declared property setter: - (void)setItems:(id)items;	// 0x518b1d
// declared property setter: - (void)setUiDelegate:(id)delegate;	// 0x518b55
// declared property getter: - (id)uiDelegate;	// 0x518b45
- (void)updateWithViewElement:(id)viewElement;	// 0x51874d
- (id)view;	// 0x5189c1
@end

