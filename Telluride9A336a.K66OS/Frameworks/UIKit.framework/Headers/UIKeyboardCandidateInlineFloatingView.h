/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 48 = 0x30
	NSString *_inlineText;	// 52 = 0x34
	CGRect _inlineRect;	// 56 = 0x38
	float _maxX;	// 72 = 0x48
	BOOL _expanded;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 84 = 0x54
	UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;	// 88 = 0x58
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 92 = 0x5c
	int _position;	// 96 = 0x60
	BOOL _reducedWidth;	// 100 = 0x64
	CGRect _previousCollapsedFrame;	// 104 = 0x68
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x353268bd; S=0x353268cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x353267d5; S=0x353267e5; @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;	// G=0x353248cd; 
@property(assign, nonatomic) BOOL expanded;	// G=0x3532689d; S=0x353268ad; @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;	// G=0x35324905; 
@property(assign, nonatomic) CGRect inlineRect;	// G=0x3532683d; S=0x35326861; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x35326809; S=0x35326819; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x3532687d; S=0x3532688d; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x35326911; S=0x35326921; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x35326951; S=0x35326975; @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x35326931; S=0x35326941; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x35326661; @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView *shadowView;	// G=0x353268dd; S=0x353268ed; @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x353266dd; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x35324585
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x35325711
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x35325339
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x35324f19
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x353262d1
- (id)candidateAtIndex:(unsigned)index;	// 0x353262a5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x35326419
// declared property getter: - (id)candidateListDelegate;	// 0x353268bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x35326465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x353264b1
// declared property getter: - (id)candidates;	// 0x353267d5
- (void)collapse;	// 0x35324da1
// declared property getter: - (CGSize)collapsedSize;	// 0x353248cd
- (void)configureKeyboard:(id)keyboard;	// 0x35326325
- (unsigned)count;	// 0x353262fd
- (id)currentCandidate;	// 0x35326255
- (unsigned)currentIndex;	// 0x3532627d
- (void)dealloc;	// 0x353247a5
- (void)expand;	// 0x3532493d
// declared property getter: - (BOOL)expanded;	// 0x3532689d
// declared property getter: - (CGSize)expandedSize;	// 0x35324905
- (BOOL)handleNumberKey:(unsigned)key;	// 0x35326351
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x3532637d
// declared property getter: - (CGRect)inlineRect;	// 0x3532683d
// declared property getter: - (id)inlineText;	// 0x35326809
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x35325231
- (void)layout;	// 0x35325d71
- (void)layoutShadow;	// 0x35325bed
// declared property getter: - (float)maxX;	// 0x3532687d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x35326515
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x353264fd
// declared property getter: - (int)position;	// 0x35326911
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x35326951
// declared property getter: - (BOOL)reducedWidth;	// 0x35326931
// declared property getter: - (id)scrollViewController;	// 0x35326661
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x353268cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x353267e5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x35325ba9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x35325a91
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x353268ad
- (void)setFrame:(CGRect)frame;	// 0x35324885
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x35326861
// declared property setter: - (void)setInlineText:(id)text;	// 0x35326819
// declared property setter: - (void)setMaxX:(float)x;	// 0x3532688d
// declared property setter: - (void)setPosition:(int)position;	// 0x35326921
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x35326975
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x35326941
// declared property setter: - (void)setShadowView:(id)view;	// 0x353268ed
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x35326125
// declared property getter: - (id)shadowView;	// 0x353268dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3532615d
- (void)showNextCandidate;	// 0x35326189
- (void)showNextPage;	// 0x35326205
- (void)showPageAtIndex:(unsigned)index;	// 0x353261d9
- (void)showPreviousCandidate;	// 0x353261b1
- (void)showPreviousPage;	// 0x3532622d
// declared property getter: - (id)sortSelectionBar;	// 0x353266dd
- (void)sortSelectionBarAction;	// 0x35326525
@end

