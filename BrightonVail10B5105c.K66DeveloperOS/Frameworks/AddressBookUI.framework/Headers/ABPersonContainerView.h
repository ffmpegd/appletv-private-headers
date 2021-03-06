/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPersonTabsLayoutManager.h"
#import <UIView.h> // Unknown library

@class UIScrollView, UIImageView, ABPersonTableViewDataSource, UISegmentedControl, ABPersonTableView, ABPersonOverlayingContainerView;
@protocol ABPersonTabsScrollView;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager> {
	UISegmentedControl *_contentSwitchingTabs;	// 84 = 0x54
	UIView *_nonScrollableHeaderView;	// 88 = 0x58
	ABPersonTableView *_tableView;	// 92 = 0x5c
	ABPersonTableViewDataSource *_dataSource;	// 96 = 0x60
	ABPersonOverlayingContainerView *_overlayingContainerView;	// 100 = 0x64
	UIImageView *_contentSwitchingTabsPocketShadow;	// 104 = 0x68
	UIImageView *_contentSwitchingTabsBorder;	// 108 = 0x6c
	BOOL _hidesContentSwitchingTabs;	// 112 = 0x70
}
@property(retain, nonatomic) UISegmentedControl *contentSwitchingTabs;	// G=0x3762ad1d; S=0x3762ac19; @synthesize=_contentSwitchingTabs
@property(retain, nonatomic) UIImageView *contentSwitchingTabsBorder;	// G=0x3768b505; S=0x3762ae31; @synthesize=_contentSwitchingTabsBorder
@property(retain, nonatomic) UIImageView *contentSwitchingTabsPocketShadow;	// G=0x3768b4f5; S=0x3762ad2d; @synthesize=_contentSwitchingTabsPocketShadow
@property(readonly, assign, nonatomic) UIScrollView<ABPersonTabsScrollView> *currentScrollView;	// G=0x3762b961; 
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x3768b4e5; S=0x37629f35; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesContentSwitchingTabs;	// G=0x3768b515; S=0x3762af9d; @synthesize=_hidesContentSwitchingTabs
@property(retain, nonatomic) UIView *nonScrollableHeaderView;	// G=0x3768b4c5; S=0x3768b135; @synthesize=_nonScrollableHeaderView
@property(retain, nonatomic) ABPersonOverlayingContainerView *overlayingContainerView;	// G=0x3762b2f5; S=0x3768af39; @synthesize=_overlayingContainerView
@property(retain, nonatomic) ABPersonTableView *tableView;	// G=0x3768b4d5; S=0x3761e3bd; @synthesize=_tableView
// declared property getter: - (id)contentSwitchingTabs;	// 0x3762ad1d
// declared property getter: - (id)contentSwitchingTabsBorder;	// 0x3768b505
// declared property getter: - (id)contentSwitchingTabsPocketShadow;	// 0x3768b4f5
// declared property getter: - (id)currentScrollView;	// 0x3762b961
// declared property getter: - (id)dataSource;	// 0x3768b4e5
- (void)dealloc;	// 0x3763b15d
- (void)didChangeContentOffset:(CGPoint)offset inScrollView:(id)scrollView;	// 0x3762b8f1
- (float)heightForHeaderAndContentSwitchingTabs;	// 0x3768b255
- (float)heightNeededForContentSwitchingTabs;	// 0x3768b1d1
// declared property getter: - (BOOL)hidesContentSwitchingTabs;	// 0x3768b515
- (void)layoutSubviews;	// 0x3762c8c9
- (void)moveContentSwitchingTabsAboveView:(id)view inScrollView:(id)scrollView;	// 0x376374f5
// declared property getter: - (id)nonScrollableHeaderView;	// 0x3768b4c5
// declared property getter: - (id)overlayingContainerView;	// 0x3762b2f5
- (id)prepareToRestoreTabsPosition;	// 0x3768b2d1
- (void)repositionContentSwitchingTabs;	// 0x37637599
- (void)restoreTabsPosition:(id)position;	// 0x3768b361
// declared property setter: - (void)setContentSwitchingTabs:(id)tabs;	// 0x3762ac19
// declared property setter: - (void)setContentSwitchingTabsBorder:(id)border;	// 0x3762ae31
// declared property setter: - (void)setContentSwitchingTabsPocketShadow:(id)shadow;	// 0x3762ad2d
// declared property setter: - (void)setDataSource:(id)source;	// 0x37629f35
- (void)setFrame:(CGRect)frame;	// 0x3761e211
// declared property setter: - (void)setHidesContentSwitchingTabs:(BOOL)tabs;	// 0x3762af9d
// declared property setter: - (void)setNonScrollableHeaderView:(id)view;	// 0x3768b135
// declared property setter: - (void)setOverlayingContainerView:(id)view;	// 0x3768af39
// declared property setter: - (void)setTableView:(id)view;	// 0x3761e3bd
// declared property getter: - (id)tableView;	// 0x3768b4d5
- (id)viewContainingHeaderView;	// 0x3768af05
@end

