/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, ATVCarouselViewUIOpContext, NSArray;
@protocol ATVCarouselViewDelegate, ATVCarouselViewDataSource, ATVCarouselViewUIDelegate;

__attribute__((visibility("hidden")))
@interface ATVCarouselView : BRControl {
	XXStruct_qlg9jA _preferredHeight;	// 84 = 0x54
	NSArray *__presentedItems;	// 88 = 0x58
	id<ATVCarouselViewUIDelegate> _uiDelegate;	// 92 = 0x5c
	XXStruct_qlg9jA _preferredWidth;	// 96 = 0x60
	int __currentIndex;	// 100 = 0x64
	ATVCarouselViewUIOpContext *__uiOpContext;	// 104 = 0x68
	NSTimer *__delayedAnimationTimer;	// 108 = 0x6c
	BOOL _editing;	// 112 = 0x70
	BOOL __goingForward;	// 113 = 0x71
	BOOL _subfocusChangeTriggersRelayout;	// 114 = 0x72
	id<ATVCarouselViewDataSource> _dataSource;	// 116 = 0x74
	BOOL __isAutoAnimating;	// 120 = 0x78
	BOOL _cyclesItems;	// 121 = 0x79
	NSRange __focusableRange;	// 124 = 0x7c
	id<ATVCarouselViewDelegate> _delegate;	// 132 = 0x84
	BOOL _autoAnimates;	// 136 = 0x88
	NSRange __presentedItemsRange;	// 140 = 0x8c
}
@property(assign, nonatomic) int _currentIndex;	// G=0x1305e9; S=0x1305f9; @synthesize=__currentIndex
@property(assign, nonatomic, setter=_setDelayedAnimationTimer:) NSTimer *_delayedAnimationTimer;	// G=0x130619; S=0x12d265; @synthesize=__delayedAnimationTimer
@property(assign, nonatomic) NSRange _focusableRange;	// G=0x1306c9; S=0x1306e1; @synthesize=__focusableRange
@property(assign, nonatomic) BOOL _goingForward;	// G=0x130649; S=0x130659; @synthesize=__goingForward
@property(assign, nonatomic) BOOL _isAutoAnimating;	// G=0x130699; S=0x1306a9; @synthesize=__isAutoAnimating
@property(retain, nonatomic) NSArray *_presentedItems;	// G=0x13058d; S=0x13059d; @synthesize=__presentedItems
@property(assign, nonatomic) NSRange _presentedItemsRange;	// G=0x130725; S=0x13073d; @synthesize=__presentedItemsRange
@property(retain, nonatomic, setter=_setUIOpContext:) ATVCarouselViewUIOpContext *_uiOpContext;	// G=0x130609; S=0x12d2b9; @synthesize=__uiOpContext
@property(assign, nonatomic) BOOL autoAnimates;	// G=0x130715; S=0x12bf89; @synthesize=_autoAnimates
@property(assign, nonatomic) BOOL cyclesItems;	// G=0x1306b9; S=0x12bf5d; @synthesize=_cyclesItems
@property(assign, nonatomic) id<ATVCarouselViewDataSource> dataSource;	// G=0x130689; S=0x12bed5; @synthesize=_dataSource
@property(assign, nonatomic) id<ATVCarouselViewDelegate> delegate;	// G=0x1306f5; S=0x130705; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x130629; S=0x130639; @synthesize=_editing
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0x130561; S=0x13057d; @synthesize=_preferredHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredWidth;	// G=0x1305bd; S=0x1305d9; @synthesize=_preferredWidth
@property(assign, nonatomic) int selectedIndex;	// G=0x12c051; S=0x12c041; 
@property(assign, nonatomic) BOOL subfocusChangeTriggersRelayout;	// G=0x130669; S=0x130679; @synthesize=_subfocusChangeTriggersRelayout
@property(assign, nonatomic, setter=setUIDelegate:) id<ATVCarouselViewUIDelegate> uiDelegate;	// G=0x1305ad; S=0x12bf15; @synthesize=_uiDelegate
- (id)init;	// 0x12bdb9
- (void)_beginEditing;	// 0x12f239
- (void)_bringCurrentIndexWithinFocusableRange;	// 0x1301e5
- (BOOL)_canEditSelectedItem;	// 0x12f099
- (BOOL)_canGoBackward;	// 0x12f1c9
- (BOOL)_canGoForward;	// 0x12f129
- (id)_controlAtIndex:(unsigned)index;	// 0x12d101
// declared property getter: - (int)_currentIndex;	// 0x1305e9
// declared property getter: - (id)_delayedAnimationTimer;	// 0x130619
- (void)_endEditing;	// 0x12f321
- (void)_focusChanged:(id)changed;	// 0x13032d
// declared property getter: - (NSRange)_focusableRange;	// 0x1306c9
// declared property getter: - (BOOL)_goingForward;	// 0x130649
- (BOOL)_handleEvent:(id)event;	// 0x12f40d
- (BOOL)_handleRearrangeEvent:(id)event;	// 0x12fd41
// declared property getter: - (BOOL)_isAutoAnimating;	// 0x130699
- (id)_makeUIOpContextWithType:(int)type;	// 0x12d3a9
- (int)_mapPresentedItemsIndex:(int)index;	// 0x12f01d
- (void)_moveControlAtIndex:(int)index toIndex:(int)index2;	// 0x12ff2d
// declared property getter: - (id)_presentedItems;	// 0x13058d
// declared property getter: - (NSRange)_presentedItemsRange;	// 0x130725
- (void)_processUIOpForItems:(id)items startingAtPositionIndex:(unsigned)positionIndex context:(id)context waitingForCompletion:(BOOL *)completion;	// 0x12d551
- (void)_scheduleRefreshWithType:(int)type;	// 0x12d44d
// declared property setter: - (void)_setDelayedAnimationTimer:(id)timer;	// 0x12d265
- (BOOL)_setSelectedIndex:(int)index;	// 0x130095
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x13045d
// declared property setter: - (void)_setUIOpContext:(id)context;	// 0x12d2b9
- (void)_startAnimation;	// 0x12ee95
- (void)_stopAnimation;	// 0x12ef95
- (int)_targetIndexForMoveFromIndex:(int)index toProposedIndex:(int)proposedIndex;	// 0x12feb9
- (void)_trickleAnimation;	// 0x12eb99
// declared property getter: - (id)_uiOpContext;	// 0x130609
// declared property getter: - (BOOL)autoAnimates;	// 0x130715
- (BOOL)brEventAction:(id)action;	// 0x12cffd
- (void)controlWasActivated;	// 0x12c74d
- (void)controlWasDeactivated;	// 0x12c7a5
- (void)controlWasFocused;	// 0x12c849
- (void)controlWasUnfocused;	// 0x12c889
// declared property getter: - (BOOL)cyclesItems;	// 0x1306b9
// declared property getter: - (id)dataSource;	// 0x130689
- (void)dealloc;	// 0x12be51
// declared property getter: - (id)delegate;	// 0x1306f5
// declared property getter: - (BOOL)isEditing;	// 0x130629
- (void)layoutSubcontrols;	// 0x12c975
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0x130561
// declared property getter: - (XXStruct_qlg9jA)preferredWidth;	// 0x1305bd
- (void)reload;	// 0x12c0a5
- (BOOL)removeItemAtIndex:(int)index withAnimation:(id)animation;	// 0x12c305
// declared property getter: - (int)selectedIndex;	// 0x12c051
// declared property setter: - (void)setAutoAnimates:(BOOL)animates;	// 0x12bf89
// declared property setter: - (void)setCyclesItems:(BOOL)items;	// 0x12bf5d
// declared property setter: - (void)setDataSource:(id)source;	// 0x12bed5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x130705
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x130639
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0x13057d
// declared property setter: - (void)setPreferredWidth:(XXStruct_qlg9jA)width;	// 0x1305d9
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x12c041
- (void)setSelectedIndexSimulatingEvent:(int)event;	// 0x12bff5
// declared property setter: - (void)setSubfocusChangeTriggersRelayout:(BOOL)relayout;	// 0x130679
// declared property setter: - (void)setUIDelegate:(id)delegate;	// 0x12bf15
// declared property setter: - (void)set_currentIndex:(int)index;	// 0x1305f9
// declared property setter: - (void)set_focusableRange:(NSRange)range;	// 0x1306e1
// declared property setter: - (void)set_goingForward:(BOOL)forward;	// 0x130659
// declared property setter: - (void)set_isAutoAnimating:(BOOL)animating;	// 0x1306a9
// declared property setter: - (void)set_presentedItems:(id)items;	// 0x13059d
// declared property setter: - (void)set_presentedItemsRange:(NSRange)range;	// 0x13073d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x12c8e1
// declared property getter: - (BOOL)subfocusChangeTriggersRelayout;	// 0x130669
// declared property getter: - (id)uiDelegate;	// 0x1305ad
@end

