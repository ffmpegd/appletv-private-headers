/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class NSMutableDictionary, NSArray, UIImageView, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, NSString, UIKeyboardCandidateGridHeader;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
	UIImageView *_backgroundView;	// 84 = 0x54
	UIView *_topBarShadow;	// 88 = 0x58
	UIView *_bottomBarShadow;	// 92 = 0x5c
	UIKeyboardCandidateSortControl *_sortBar;	// 96 = 0x60
	UIKeyboardCandidateGridHeader *_gridHeader;	// 100 = 0x64
	BOOL _drawTopShadow;	// 104 = 0x68
	BOOL _drawBottomShadow;	// 105 = 0x69
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 108 = 0x6c
	NSArray *_candidates;	// 112 = 0x70
	unsigned _selectedCandidateIndex;	// 116 = 0x74
	NSArray *_sorts;	// 120 = 0x78
	NSMutableDictionary *_scrollViewControllers;	// 124 = 0x7c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 128 = 0x80
	unsigned _numberOfColumns;	// 132 = 0x84
	id<UIScrollViewDelegate> _scrollViewDelegate;	// 136 = 0x88
	int _visualStyle;	// 140 = 0x8c
	NSArray *_sortedCandidates;	// 144 = 0x90
	NSString *_inlineText;	// 148 = 0x94
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x305cbf2d; S=0x305cbf3d; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x305cbf4d; S=0x305cb53d; @synthesize=_candidates
@property(assign, nonatomic) BOOL drawBottomShadow;	// G=0x305cbf1d; S=0x305cad51; @synthesize=_drawBottomShadow
@property(assign, nonatomic) BOOL drawTopShadow;	// G=0x305cbf0d; S=0x305cad0d; @synthesize=_drawTopShadow
@property(assign, nonatomic) UIKeyboardCandidateGridHeader *gridHeader;	// G=0x305cbfad; S=0x305cbfbd; @synthesize=_gridHeader
@property(retain, nonatomic) NSString *inlineText;	// G=0x305cc04d; S=0x305cb179; @synthesize=_inlineText
@property(assign, nonatomic) unsigned numberOfColumns;	// G=0x305cbfcd; S=0x305cbfdd; @synthesize=_numberOfColumns
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x305cbf7d; S=0x305cbf8d; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) NSMutableDictionary *scrollViewControllers;	// G=0x305cb8cd; @synthesize=_scrollViewControllers
@property(assign, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;	// G=0x305cbfed; S=0x305cbffd; @synthesize=_scrollViewDelegate
@property(assign, nonatomic) unsigned selectedCandidateIndex;	// G=0x305caebd; S=0x305caee5; @synthesize=_selectedCandidateIndex
@property(assign, nonatomic) UIKeyboardCandidateSortControl *sortBar;	// G=0x305cbf9d; S=0x305cb95d; @synthesize=_sortBar
@property(retain, nonatomic) NSArray *sortedCandidates;	// G=0x305cc02d; S=0x305cc03d; @synthesize=_sortedCandidates
@property(retain, nonatomic) NSArray *sorts;	// G=0x305cbf5d; S=0x305cbf6d; @synthesize=_sorts
@property(assign, nonatomic) int visualStyle;	// G=0x305cc00d; S=0x305cc01d; @synthesize=_visualStyle
- (id)initWithFrame:(CGRect)frame;	// 0x305ca3a5
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x305cb059
- (id)candidateAtIndex:(unsigned)index;	// 0x305cb02d
- (id)candidateGroupsForSortIndex:(int)sortIndex;	// 0x305cb3f9
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x305cb309
// declared property getter: - (id)candidateListDelegate;	// 0x305cbf2d
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x305cb359
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x305cb3a9
// declared property getter: - (id)candidates;	// 0x305cbf4d
- (void)candidatesDidChange;	// 0x305cb0ad
- (BOOL)candidatesForSortIndexShowAlternativeText:(int)sortIndexShowAlternativeText;	// 0x305cb451
- (void)clearViews;	// 0x305ca939
- (void)configureKeyboard:(id)keyboard;	// 0x305cb231
- (unsigned)count;	// 0x305cb085
- (id)currentCandidate;	// 0x305cafdd
- (unsigned)currentIndex;	// 0x305cb005
- (void)dealloc;	// 0x305ca845
// declared property getter: - (BOOL)drawBottomShadow;	// 0x305cbf1d
// declared property getter: - (BOOL)drawTopShadow;	// 0x305cbf0d
// declared property getter: - (id)gridHeader;	// 0x305cbfad
- (BOOL)handleNumberKey:(unsigned)key;	// 0x305cb25d
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x305cb289
- (BOOL)hasNextPage;	// 0x305cafb5
- (BOOL)hasPreviousPage;	// 0x305caf8d
- (id)indexTitlesForGroupTitles:(id)groupTitles;	// 0x305cbe39
// declared property getter: - (id)inlineText;	// 0x305cc04d
- (void)layout;	// 0x305cac11
- (void)layoutSubviews;	// 0x305caa71
// declared property getter: - (unsigned)numberOfColumns;	// 0x305cbfcd
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x305cbf09
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x305cbf05
// declared property getter: - (id)scrollViewController;	// 0x305cbf7d
// declared property getter: - (id)scrollViewControllers;	// 0x305cb8cd
// declared property getter: - (id)scrollViewDelegate;	// 0x305cbfed
- (void)selectCandidate:(id)candidate;	// 0x305cad99
// declared property getter: - (unsigned)selectedCandidateIndex;	// 0x305caebd
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x305cbf3d
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x305cb53d
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x305cb101
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x305cb135
// declared property setter: - (void)setDrawBottomShadow:(BOOL)shadow;	// 0x305cad51
// declared property setter: - (void)setDrawTopShadow:(BOOL)shadow;	// 0x305cad0d
// declared property setter: - (void)setGridHeader:(id)header;	// 0x305cbfbd
// declared property setter: - (void)setInlineText:(id)text;	// 0x305cb179
// declared property setter: - (void)setNumberOfColumns:(unsigned)columns;	// 0x305cbfdd
// declared property setter: - (void)setScrollViewController:(id)controller;	// 0x305cbf8d
// declared property setter: - (void)setScrollViewDelegate:(id)delegate;	// 0x305cbffd
// declared property setter: - (void)setSelectedCandidateIndex:(unsigned)index;	// 0x305caee5
// declared property setter: - (void)setSortBar:(id)bar;	// 0x305cb95d
// declared property setter: - (void)setSortedCandidates:(id)candidates;	// 0x305cc03d
// declared property setter: - (void)setSorts:(id)sorts;	// 0x305cbf6d
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x305cb1a5
// declared property setter: - (void)setVisualStyle:(int)style;	// 0x305cc01d
- (void)showArrowButton:(BOOL)button;	// 0x305cadc5
- (void)showCandidate:(id)candidate;	// 0x305cae41
- (void)showCandidateAtIndex:(unsigned)index;	// 0x305cae15
- (void)showNextCandidate;	// 0x305cae6d
- (void)showNextPage;	// 0x305caf3d
- (void)showPageAtIndex:(unsigned)index;	// 0x305caf11
- (void)showPreviousCandidate;	// 0x305cae95
- (void)showPreviousPage;	// 0x305caf65
// declared property getter: - (id)sortBar;	// 0x305cbf9d
- (void)sortSelectionBarAction:(id)action;	// 0x305cb9f1
// declared property getter: - (id)sortedCandidates;	// 0x305cc02d
// declared property getter: - (id)sorts;	// 0x305cbf5d
- (void)statusBarFrameWillChange:(id)statusBarFrame;	// 0x305cad95
// declared property getter: - (int)visualStyle;	// 0x305cc00d
@end

