/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, ATVFeedPagedGridElement, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedPagedGridDataSource : NSObject {
@private
	unsigned _oldGridSelection;	// 4 = 0x4
	NSMutableArray *_grids;	// 8 = 0x8
	NSArray *_pages;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	ATVFeedPagedGridElement *_feedElement;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedPagedGridElement *feedElement;	// G=0x331741d1; S=0x331741e1; @synthesize=_feedElement
@property(readonly, assign) ATVMerchant *merchant;	// G=0x331741bd; @synthesize=_merchant
@property(readonly, assign) NSArray *pages;	// G=0x331741a9; @synthesize=_pages
- (id)initWithFeedElement:(id)feedElement;	// 0x33173ae1
- (id)initWithPages:(id)pages merchant:(id)merchant;	// 0x33173c45
- (void)dealloc;	// 0x33173d65
// declared property getter: - (id)feedElement;	// 0x331741d1
// declared property getter: - (id)merchant;	// 0x331741bd
- (long)pageCountForPagedView:(id)pagedView;	// 0x3317404d
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x331740ed
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x33173ded
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x331740b1
// declared property getter: - (id)pages;	// 0x331741a9
// declared property setter: - (void)setFeedElement:(id)element;	// 0x331741e1
@end

