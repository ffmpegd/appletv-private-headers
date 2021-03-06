/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRAsynchronousControllerViewLoading.h"
#import "BRSecureResource.h"

@class BRPanelControl, BRMerchant, BRControl, ATVURLDocument, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVCatalogApplianceController : BRController <BRSecureResource, BRAsynchronousControllerViewLoading> {
	BRPanelControl *_contentContainer;	// 96 = 0x60
	id _storeObject;	// 100 = 0x64
	BRControl *_catalogControl;	// 104 = 0x68
	BOOL _controllerToSwapOnActivate;	// 108 = 0x6c
	long _state;	// 112 = 0x70
	NSTimer *_timer;	// 116 = 0x74
	BOOL _isDirty;	// 120 = 0x78
	BOOL _isVolatile;	// 121 = 0x79
	BOOL _autoPlay;	// 122 = 0x7a
	BRMerchant *_merchant;	// 124 = 0x7c
	Class _catalogAgent;	// 128 = 0x80
	ATVURLDocument *_document;	// 132 = 0x84
	BOOL requiresAuthentication;	// 136 = 0x88
	BOOL _shouldStartWaitPromptTimerOnActivate;	// 137 = 0x89
	int _viewAvailability;	// 140 = 0x8c
	id _networkConfigurationObservingToken;	// 144 = 0x90
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x10e9ad; S=0x10e9bd; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x10ea5d; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x10ea4d; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x10e5dd; S=0x10e551; 
@property(assign, nonatomic) id networkConfigurationObservingToken;	// G=0x10ea2d; S=0x10ea3d; @synthesize=_networkConfigurationObservingToken
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x10e9cd; S=0x10e9dd; @synthesize
@property(assign, nonatomic) BOOL shouldStartWaitPromptTimerOnActivate;	// G=0x10e9ed; S=0x10e9fd; @synthesize=_shouldStartWaitPromptTimerOnActivate
@property(readonly, retain) id storeObject;	// G=0x10e715; converted property
@property(assign, nonatomic) int viewAvailability;	// G=0x10ea0d; S=0x10ea1d; @synthesize=_viewAvailability
+ (id)control;	// 0x10de89
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x10de35
+ (void)initialize;	// 0x10dd85
- (id)init;	// 0x10dec1
- (void)_controlCreated:(id)created;	// 0x10fa6d
- (void)_controlNeedsAuth:(id)auth;	// 0x10feb5
- (void)_enterCompleteState;	// 0x10f565
- (void)_enterErrorState;	// 0x10f19d
- (void)_enterWaitingForAuthState;	// 0x10f405
- (void)_enterWaitingForControlState;	// 0x10f419
- (void)_enterWaitingForInitialState;	// 0x10f119
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x10f7a5
- (void)_handleWindowMaxBoundsChanged;	// 0x10e2bd
- (void)_setState:(int)state;	// 0x10f0ad
- (void)_showWaitTimer:(id)timer;	// 0x10f755
- (void)_swapInNewController:(id)newController;	// 0x10f835
- (void)_updateStateForAction:(int)action;	// 0x10f7e9
- (id)accessibilityLabel;	// 0x10e825
- (void)addControls;	// 0x10ee09
// declared property getter: - (BOOL)autoPlay;	// 0x10e9ad
// converted property getter: - (id)catalogControl;	// 0x10ea5d
// converted property getter: - (id)contentContainer;	// 0x10ea4d
- (void)controlWasActivated;	// 0x10e0c5
- (void)controlWasDeactivated;	// 0x10e269
- (void)dealloc;	// 0x10dfe9
- (void)didEnterErrorState;	// 0x10f0a1
- (id)errorContent;	// 0x10ec65
- (BOOL)isNetworkDependent;	// 0x10e54d
- (void)layoutSubcontrols;	// 0x10e771
- (void)markAsDirty;	// 0x10e74d
// declared property getter: - (id)merchant;	// 0x10e5dd
// declared property getter: - (id)networkConfigurationObservingToken;	// 0x10ea2d
- (BOOL)recreateOnReselect;	// 0x10e735
- (void)refreshDirtyPage;	// 0x10efdd
// declared property getter: - (BOOL)requiresAuthentication;	// 0x10e9cd
- (id)secureResourceAuthenticator;	// 0x10e935
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x10e9bd
- (void)setCatalogAgent:(Class)agent;	// 0x10e761
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x10e551
// declared property setter: - (void)setNetworkConfigurationObservingToken:(id)token;	// 0x10ea3d
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x10e9dd
// declared property setter: - (void)setShouldStartWaitPromptTimerOnActivate:(BOOL)startWaitPromptTimerOnActivate;	// 0x10e9fd
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x10ea6d
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x10e5ed
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x10ea1d
- (BOOL)shouldAllowControllerContent;	// 0x10f0a9
- (BOOL)shouldAllowTransitionOnSwap;	// 0x10f0a5
- (BOOL)shouldShowWaitContent;	// 0x10ec61
// declared property getter: - (BOOL)shouldStartWaitPromptTimerOnActivate;	// 0x10e9ed
- (BOOL)showsHeader;	// 0x10e3e5
- (id)storeMerchant;	// 0x10e725
// converted property getter: - (id)storeObject;	// 0x10e715
- (void)updateContent:(id)content;	// 0x10ee0d
// declared property getter: - (int)viewAvailability;	// 0x10ea0d
- (id)waitContent;	// 0x10eb89
- (void)wasPopped;	// 0x10e381
- (void)wasPushed;	// 0x10e32d
- (void)willEnterCompleteState;	// 0x10f09d
@end

