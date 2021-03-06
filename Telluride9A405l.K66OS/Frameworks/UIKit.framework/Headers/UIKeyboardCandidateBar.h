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
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// G=0x32f9ddb5; S=0x32f9ddc5; @synthesize=m_animating
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView *cellsContainerView;	// G=0x32f9dd3d; S=0x32f9dd4d; @synthesize=m_cellsContainerView
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x32f9c621; S=0x32f9dd71; @synthesize=m_extendedCandidatesView
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x32f9dd95; S=0x32f9dda5; @synthesize=m_minimized
+ (id)activeInstance;	// 0x32cf5c85
+ (float)candidateBarHeight;	// 0x32f9afb1
+ (id)sharedInstance;	// 0x32f9ae0d
- (id)initWithFrame:(CGRect)frame;	// 0x32f9b045
- (id).cxx_construct;	// 0x32f9ddd5
- (BOOL)_addCells:(int)cells;	// 0x32f9cb8d
- (void)_bgAddCells:(id)cells;	// 0x32f9cb01
- (void)_cellSelected:(id)selected;	// 0x32f9c841
- (void)_clearAll;	// 0x32f9c7b1
- (void)_clearCells;	// 0x32f9c6bd
- (void)_forceLayoutTo:(unsigned)to;	// 0x32f9d409
- (void)_hideExtendedCandidatesViewWithAnimation:(BOOL)animation;	// 0x32f9d8b9
- (void)_setCurrentCandidateIndex:(unsigned)index;	// 0x32f9ba35
- (void)_showExtendedCandidatesView;	// 0x32f9d4c1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x32f9c349
- (id)candidateAtIndex:(unsigned)index;	// 0x32f9c2dd
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x32f9c58d
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32f9c5ad
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x32f9c5cd
// declared property getter: - (id)cellsContainerView;	// 0x32f9dd3d
- (void)configureKeyboard:(id)keyboard;	// 0x32f9c46d
- (unsigned)count;	// 0x32f9c44d
- (id)currentCandidate;	// 0x32f9c1fd
- (unsigned)currentIndex;	// 0x32f9c271
- (void)dealloc;	// 0x32f9b3ad
// declared property getter: - (id)extendedCandidatesView;	// 0x32f9c621
// declared property getter: - (BOOL)isAnimating;	// 0x32f9ddb5
// declared property getter: - (BOOL)isMinimized;	// 0x32f9dd95
- (void)layout;	// 0x32f9b629
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32f9b325
- (CGSize)screenSpaceBetweenStatusBarAndKeyboard;	// 0x32f9c9b1
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x32f9ddc5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32f9b45d
// declared property setter: - (void)setCellsContainerView:(id)view;	// 0x32f9dd4d
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x32f9dd71
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x32f9dda5
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x32f9b975
- (void)showCandidateAtIndex:(unsigned)index;	// 0x32f9bb61
- (void)showNextCandidate;	// 0x32f9bc79
- (void)showNextPage;	// 0x32f9c185
- (void)showPageAtIndex:(unsigned)index;	// 0x32f9c145
- (void)showPreviousCandidate;	// 0x32f9bed5
- (void)showPreviousPage;	// 0x32f9c1c1
@end

