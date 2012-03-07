/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateList.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIKeyboardCandidateListDelegate.h"

@class NSArray, NSString, UIKeyboardCandidateExtended, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 4 = 0x4
	NSArray *_candidates;	// 8 = 0x8
	NSString *_inlineText;	// 12 = 0xc
	int _promptTextType;	// 16 = 0x10
	CGRect _inlineRect;	// 20 = 0x14
	UIKeyboardCandidateExtended *_extendedCandidatesView;	// 36 = 0x24
	BOOL _showingExtendedCandidatesView;	// 40 = 0x28
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x3029c9c5; S=0x3029c9d5; @synthesize=_candidateListDelegate
@property(copy, nonatomic) NSArray *candidates;	// G=0x3029c9e5; S=0x3029c9f5; @synthesize=_candidates
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x3029c8f5; S=0x3029caad; @synthesize=_extendedCandidatesView
@property(assign, nonatomic) CGRect inlineRect;	// G=0x3029ca6d; S=0x3029ca91; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x3029ca19; S=0x3029ca29; @synthesize=_inlineText
@property(readonly, assign, nonatomic) UIView<UIKeyboardCandidateList> *inlineView;	// @dynamic
@property(assign, nonatomic) int promptTextType;	// G=0x3029ca4d; S=0x3029ca5d; @synthesize=_promptTextType
@property(assign, nonatomic) BOOL showingExtendedCandidatesView;	// G=0x3029cad1; S=0x3029cae1; @synthesize=_showingExtendedCandidatesView
+ (void)releaseSharedInstance;	// 0x3029bab9
+ (id)sharedInstance;	// 0x3029ba19
- (id)_inlineView;	// 0x3029caf1
- (void)animateInlineCandidate;	// 0x3029bde1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x3029c399
- (id)candidateAtIndex:(unsigned)index;	// 0x3029c31d
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x3029c659
// declared property getter: - (id)candidateListDelegate;	// 0x3029c9c5
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x3029c861
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x3029c8ad
// declared property getter: - (id)candidates;	// 0x3029c9e5
- (void)configureKeyboard:(id)keyboard;	// 0x3029c491
- (unsigned)count;	// 0x3029c431
- (id)currentCandidate;	// 0x3029c211
- (unsigned)currentIndex;	// 0x3029c2bd
- (void)dealloc;	// 0x3029b991
// declared property getter: - (id)extendedCandidatesView;	// 0x3029c8f5
- (void)hideExtendedCandidatesView;	// 0x3029bd05
// declared property getter: - (CGRect)inlineRect;	// 0x3029ca6d
// declared property getter: - (id)inlineText;	// 0x3029ca19
- (void)layout;	// 0x3029be2d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x3029bde5
// declared property getter: - (int)promptTextType;	// 0x3029ca4d
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x3029c9d5
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x3029c9f5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3029bde9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3029c5a1
- (void)setCompletionContext:(id)context;	// 0x3029c649
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x3029caad
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x3029ca91
// declared property setter: - (void)setInlineText:(id)text;	// 0x3029ca29
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x3029ca5d
// declared property setter: - (void)setShowingExtendedCandidatesView:(BOOL)view;	// 0x3029cae1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x3029be6d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3029bef1
- (void)showExtendedCandidatesView;	// 0x3029bae1
- (void)showNextCandidate;	// 0x3029bfbd
- (void)showNextPage;	// 0x3029c151
- (void)showPageAtIndex:(unsigned)index;	// 0x3029c0ed
- (void)showPreviousCandidate;	// 0x3029c055
- (void)showPreviousPage;	// 0x3029c1b1
// declared property getter: - (BOOL)showingExtendedCandidatesView;	// 0x3029cad1
@end

