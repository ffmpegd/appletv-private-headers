/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class UIScrollView, NSMutableArray, UIKeyboardCandidateExtended, UIKeyboardCandidateBarBackgroundView, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> m_delegate;	// 48 = 0x30
	UIKeyboardCandidateBarBackgroundView *m_cellsContainerView;	// 52 = 0x34
	NSArray *m_candidates;	// 56 = 0x38
	NSArray *m_allCandidates;	// 60 = 0x3c
	NSString *m_inlineText;	// 64 = 0x40
	NSMutableArray *m_cells;	// 68 = 0x44
	unsigned m_currentCandidateIndex;	// 72 = 0x48
	CGRect m_inlineRect;	// 76 = 0x4c
	float m_maxX;	// 92 = 0x5c
	BOOL m_largeUIShowing;	// 96 = 0x60
	UIKeyboardCandidateExtended *m_extendedCandidatesView;	// 100 = 0x64
	UIScrollView *m_scrollView;	// 104 = 0x68
	UIView *m_extendedButton;	// 108 = 0x6c
	UIView *m_shadowView;	// 112 = 0x70
	BOOL m_minimized;	// 116 = 0x74
	BOOL m_animating;	// 117 = 0x75
}
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// G=0x33ca2db5; S=0x33ca2dc5; @synthesize=m_animating
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView *cellsContainerView;	// G=0x33ca2d3d; S=0x33ca2d4d; @synthesize=m_cellsContainerView
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x33ca1621; S=0x33ca2d71; @synthesize=m_extendedCandidatesView
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x33ca2d95; S=0x33ca2da5; @synthesize=m_minimized
+ (id)activeInstance;	// 0x339fac85
+ (float)candidateBarHeight;	// 0x33c9ffb1
+ (id)sharedInstance;	// 0x33c9fe0d
- (id)initWithFrame:(CGRect)frame;	// 0x33ca0045
- (id).cxx_construct;	// 0x33ca2dd5
- (BOOL)_addCells:(int)cells;	// 0x33ca1b8d
- (void)_bgAddCells:(id)cells;	// 0x33ca1b01
- (void)_cellSelected:(id)selected;	// 0x33ca1841
- (void)_clearAll;	// 0x33ca17b1
- (void)_clearCells;	// 0x33ca16bd
- (void)_forceLayoutTo:(unsigned)to;	// 0x33ca2409
- (void)_hideExtendedCandidatesViewWithAnimation:(BOOL)animation;	// 0x33ca28b9
- (void)_setCurrentCandidateIndex:(unsigned)index;	// 0x33ca0a35
- (void)_showExtendedCandidatesView;	// 0x33ca24c1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x33ca1349
- (id)candidateAtIndex:(unsigned)index;	// 0x33ca12dd
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x33ca158d
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x33ca15ad
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x33ca15cd
// declared property getter: - (id)cellsContainerView;	// 0x33ca2d3d
- (void)configureKeyboard:(id)keyboard;	// 0x33ca146d
- (unsigned)count;	// 0x33ca144d
- (id)currentCandidate;	// 0x33ca11fd
- (unsigned)currentIndex;	// 0x33ca1271
- (void)dealloc;	// 0x33ca03ad
// declared property getter: - (id)extendedCandidatesView;	// 0x33ca1621
// declared property getter: - (BOOL)isAnimating;	// 0x33ca2db5
// declared property getter: - (BOOL)isMinimized;	// 0x33ca2d95
- (void)layout;	// 0x33ca0629
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33ca0325
- (CGSize)screenSpaceBetweenStatusBarAndKeyboard;	// 0x33ca19b1
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x33ca2dc5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33ca045d
// declared property setter: - (void)setCellsContainerView:(id)view;	// 0x33ca2d4d
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x33ca2d71
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x33ca2da5
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x33ca0975
- (void)showCandidateAtIndex:(unsigned)index;	// 0x33ca0b61
- (void)showNextCandidate;	// 0x33ca0c79
- (void)showNextPage;	// 0x33ca1185
- (void)showPageAtIndex:(unsigned)index;	// 0x33ca1145
- (void)showPreviousCandidate;	// 0x33ca0ed5
- (void)showPreviousPage;	// 0x33ca11c1
@end

