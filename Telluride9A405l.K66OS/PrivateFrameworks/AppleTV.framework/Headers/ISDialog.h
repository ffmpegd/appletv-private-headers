/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSArray, SSAuthenticationContext, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISDialog : NSObject {
@private
	BOOL _allowDuplicates;	// 4 = 0x4
	SSAuthenticationContext *_authenticationContext;	// 8 = 0x8
	BOOL _authorizationIsForced;	// 12 = 0xc
	NSArray *_buttons;	// 16 = 0x10
	int _defaultButtonIndex;	// 20 = 0x14
	NSString *_displayCountKey;	// 24 = 0x18
	BOOL _dismissOnLock;	// 28 = 0x1c
	BOOL _expectsResponse;	// 29 = 0x1d
	BOOL _groupsTextFields;	// 30 = 0x1e
	int _kind;	// 32 = 0x20
	NSLock *_lock;	// 36 = 0x24
	int _maxDisplayCount;	// 40 = 0x28
	NSString *_message;	// 44 = 0x2c
	BOOL _oneButtonPerLine;	// 48 = 0x30
	BOOL _shouldDismissAfterUnlock;	// 49 = 0x31
	BOOL _shouldDisplayAsTopMost;	// 50 = 0x32
	BOOL _shouldHideButtonsInAwayView;	// 51 = 0x33
	NSArray *_textFields;	// 52 = 0x34
	NSString *_title;	// 56 = 0x38
	int _unlockActionButtonIndex;	// 60 = 0x3c
	NSMutableDictionary *_userInfo;	// 64 = 0x40
}
@property(assign) BOOL allowDuplicates;	// G=0x35f45b01; S=0x35f45b11; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x35f45b21; S=0x35f45b35; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x35f45b59; S=0x35f45b69; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x35f45b79; S=0x35f45b8d; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x35f45bb1; S=0x35f45bc1; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x35f45bd1; S=0x35f45be1; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x35f454b5; S=0x35f45889; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x35f455f1; 
@property(assign) BOOL expectsResponse;	// G=0x35f45bf1; S=0x35f45c01; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x35f45c11; S=0x35f45c21; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x35f45c31; S=0x35f45c41; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x35f4583d; S=0x35f4590d; 
@property(retain) NSString *message;	// G=0x35f45c51; S=0x35f45c65; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x35f45c89; S=0x35f45c99; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x35f45ca9; S=0x35f45cb9; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x35f45cc9; S=0x35f45cd9; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x35f45ce9; S=0x35f45cf9; @synthesize=_shouldHideButtonsInAwayView
@property(retain) NSArray *textFields;	// G=0x35f45d09; S=0x35f45d1d; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x35f45d41; S=0x35f45d55; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x35f45d79; S=0x35f45d89; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x35f44e6d
- (id)init;	// 0x35f43f19
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x35f43a59
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x35f43fc9
- (id)initWithError:(id)error;	// 0x35f44675
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x35f449b5
- (id)initWithTitle:(id)title message:(id)message;	// 0x35f44c81
- (int)_kindForString:(id)string;	// 0x35f45a95
// declared property getter: - (BOOL)allowDuplicates;	// 0x35f45b01
// declared property getter: - (id)authenticationContext;	// 0x35f45b21
// declared property getter: - (BOOL)authorizationIsForced;	// 0x35f45b59
// declared property getter: - (id)buttons;	// 0x35f45b79
- (id)copyUserNotification;	// 0x35f44ebd
- (void)dealloc;	// 0x35f44d95
// declared property getter: - (int)defaultButtonIndex;	// 0x35f45bb1
// declared property getter: - (BOOL)dismissOnLock;	// 0x35f45bd1
// declared property getter: - (id)displayCountKey;	// 0x35f454b5
// declared property getter: - (BOOL)expectsResponse;	// 0x35f45bf1
// declared property getter: - (BOOL)groupsTextFields;	// 0x35f45c11
- (void)incrementDisplayCount;	// 0x35f45521
// declared property getter: - (BOOL)isDisplayable;	// 0x35f455f1
- (BOOL)isEqual:(id)equal;	// 0x35f456b9
// declared property getter: - (int)kind;	// 0x35f45c31
// declared property getter: - (int)maximumDisplayCount;	// 0x35f4583d
// declared property getter: - (id)message;	// 0x35f45c51
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x35f45c89
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x35f45b11
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x35f45b35
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x35f45b69
// declared property setter: - (void)setButtons:(id)buttons;	// 0x35f45b8d
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x35f45bc1
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x35f45be1
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x35f45889
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x35f45c01
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x35f45c21
// declared property setter: - (void)setKind:(int)kind;	// 0x35f45c41
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x35f4590d
// declared property setter: - (void)setMessage:(id)message;	// 0x35f45c65
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x35f45c99
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x35f45cb9
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x35f45cd9
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x35f45cf9
// declared property setter: - (void)setTextFields:(id)fields;	// 0x35f45d1d
// declared property setter: - (void)setTitle:(id)title;	// 0x35f45d55
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x35f45d89
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x35f45959
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x35f45ca9
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x35f45cc9
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x35f45ce9
// declared property getter: - (id)textFields;	// 0x35f45d09
// declared property getter: - (id)title;	// 0x35f45d41
// declared property getter: - (int)unlockActionButtonIndex;	// 0x35f45d79
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x35f45a15
@end

