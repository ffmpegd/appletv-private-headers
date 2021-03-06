/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import <NSObject.h> // Unknown library

@class UIKeyboardCandidateView, NSString, UIView, NSArray;
@protocol UIKeyboardCandidateViewInline;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
	NSArray *m_candidates;	// 4 = 0x4
	NSString *m_inlineText;	// 8 = 0x8
	CGRect m_inlineRect;	// 12 = 0xc
	UIView<UIKeyboardCandidateList> *m_inlineView;	// 28 = 0x1c
	UIKeyboardCandidateView<UIKeyboardCandidateViewInline> *m_extendedView;	// 32 = 0x20
	struct {
		unsigned isExtended;
	} _inlineFlags;	// 36 = 0x24
	int _promptTextType;	// 40 = 0x28
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x31e5ae09; S=0x31e5ae19; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x31e5ad69; S=0x31e5ad79; @synthesize=m_candidates
@property(assign, nonatomic) CGRect inlineRect;	// G=0x31e5ada9; S=0x31e5adcd; @synthesize=m_inlineRect
@property(retain, nonatomic) NSString *inlineText;	// G=0x31e5ad89; S=0x31e5ad99; @synthesize=m_inlineText
@property(assign, nonatomic) int promptTextType;	// G=0x31e5ade9; S=0x31e5adf9; @synthesize=_promptTextType
+ (id)sharedInstance;	// 0x31e59f8d
- (id)init;	// 0x31e5a01d
- (id)_inlineView;	// 0x31e5ae29
- (id)activeCandidateList;	// 0x31e5a255
- (void)animateInlineCandidate;	// 0x31e5a599
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x31e5a965
- (id)candidateAtIndex:(unsigned)index;	// 0x31e5a939
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x31e5ac81
// declared property getter: - (id)candidateListDelegate;	// 0x31e5ae09
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x31e5acd5
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x31e5ad25
// declared property getter: - (id)candidates;	// 0x31e5ad69
- (void)candidatesDidChange;	// 0x31e5a559
- (void)configureKeyboard:(id)keyboard;	// 0x31e5aa09
- (unsigned)count;	// 0x31e5a9e1
- (id)currentCandidate;	// 0x31e5a8c5
- (unsigned)currentIndex;	// 0x31e5a911
- (void)dealloc;	// 0x31e5a1fd
// declared property getter: - (CGRect)inlineRect;	// 0x31e5ada9
// declared property getter: - (id)inlineText;	// 0x31e5ad89
- (BOOL)isReducedWidth;	// 0x31e59fd5
- (void)layout;	// 0x31e5a59d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x31e5a595
// declared property getter: - (int)promptTextType;	// 0x31e5ade9
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x31e5ae19
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x31e5ad79
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x31e5ac2d
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x31e5ab25
- (void)setCompletionContext:(id)context;	// 0x31e5ac71
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x31e5adcd
// declared property setter: - (void)setInlineText:(id)text;	// 0x31e5ad99
- (void)setInlineViewExtended:(BOOL)extended;	// 0x31e5a295
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x31e5adf9
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x31e5a5e9
- (void)showCandidate:(id)candidate;	// 0x31e5a681
- (void)showCandidateAtIndex:(unsigned)index;	// 0x31e5a6ad
- (void)showNextCandidate;	// 0x31e5a759
- (void)showNextPage;	// 0x31e5a875
- (void)showPageAtIndex:(unsigned)index;	// 0x31e5a849
- (void)showPreviousCandidate;	// 0x31e5a7d1
- (void)showPreviousPage;	// 0x31e5a89d
@end

