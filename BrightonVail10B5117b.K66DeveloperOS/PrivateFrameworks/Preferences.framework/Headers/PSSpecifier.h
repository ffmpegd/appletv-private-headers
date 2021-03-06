/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject {
	id target;	// 4 = 0x4
	SEL getter;	// 8 = 0x8
	SEL setter;	// 12 = 0xc
	SEL action;	// 16 = 0x10
	SEL cancel;	// 20 = 0x14
	Class detailControllerClass;	// 24 = 0x18
	int cellType;	// 28 = 0x1c
	Class editPaneClass;	// 32 = 0x20
	int keyboardType;	// 36 = 0x24
	int autoCapsType;	// 40 = 0x28
	int autoCorrectionType;	// 44 = 0x2c
	int textFieldType;	// 48 = 0x30
	NSString *_name;	// 52 = 0x34
	NSArray *_values;	// 56 = 0x38
	NSDictionary *_titleDict;	// 60 = 0x3c
	NSDictionary *_shortTitleDict;	// 64 = 0x40
	id _userInfo;	// 68 = 0x44
	NSMutableDictionary *_properties;	// 72 = 0x48
	SEL _confirmationAction;	// 76 = 0x4c
@private
	SEL _confirmationCancelAction;	// 80 = 0x50
@protected
	SEL _buttonAction;	// 84 = 0x54
	SEL _controllerLoadAction;	// 88 = 0x58
	BOOL _showContentString;	// 92 = 0x5c
}
@property(assign, nonatomic) SEL buttonAction;	// G=0x354bfe45; S=0x354bfe55; @synthesize=_buttonAction
@property(assign, nonatomic) int cellType;	// G=0x354bfd35; S=0x354bfd45; @synthesize
@property(assign, nonatomic) SEL confirmationAction;	// G=0x354bfe05; S=0x354bfe15; @synthesize=_confirmationAction
@property(assign, nonatomic) SEL confirmationCancelAction;	// G=0x354bfe25; S=0x354bfe35; @synthesize=_confirmationCancelAction
@property(assign, nonatomic) SEL controllerLoadAction;	// G=0x354bfe65; S=0x354bfe75; @synthesize=_controllerLoadAction
@property(assign, nonatomic) Class detailControllerClass;	// G=0x354bfd15; S=0x354bfd25; @synthesize
@property(assign, nonatomic) Class editPaneClass;	// G=0x354bfd55; S=0x354bfd65; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x354bfbed; S=0x354bfbd1; 
@property(retain, nonatomic) NSString *name;	// G=0x354bfde5; S=0x354bfdf5; @synthesize=_name
@property(retain) NSMutableDictionary *properties;	// G=0x354bf3ad; S=0x354bf371; converted property
@property(retain, nonatomic) NSDictionary *shortTitleDictionary;	// G=0x354bfbad; S=0x354bfdb5; @synthesize=_shortTitleDict
@property(assign, nonatomic) BOOL showContentString;	// G=0x354bfe85; S=0x354bfe95; @synthesize=_showContentString
@property(assign, nonatomic) id target;	// G=0x354bfcf5; S=0x354bfd05; @synthesize
@property(retain, nonatomic) NSDictionary *titleDictionary;	// G=0x354bfd95; S=0x354bfda5; @synthesize=_titleDict
@property(retain, nonatomic) id userInfo;	// G=0x354bfd75; S=0x354bfd85; @synthesize=_userInfo
@property(retain, nonatomic) NSArray *values;	// G=0x354bfdc5; S=0x354bfdd5; @synthesize=_values
+ (int)autoCapsTypeForString:(id)string;	// 0x354bfaf1
+ (int)autoCorrectionTypeForNumber:(id)number;	// 0x354bfac5
+ (id)emptyGroupSpecifier;	// 0x354bf2f5
+ (id)groupSpecifierWithName:(id)name;	// 0x354bf2c1
+ (int)keyboardTypeForString:(id)string;	// 0x354bfb5d
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x354bf201
- (id)init;	// 0x354bf175
// declared property getter: - (SEL)buttonAction;	// 0x354bfe45
// declared property getter: - (int)cellType;	// 0x354bfd35
// declared property getter: - (SEL)confirmationAction;	// 0x354bfe05
// declared property getter: - (SEL)confirmationCancelAction;	// 0x354bfe25
// declared property getter: - (SEL)controllerLoadAction;	// 0x354bfe65
- (void)dealloc;	// 0x354bf939
- (id)description;	// 0x354bf9ed
// declared property getter: - (Class)detailControllerClass;	// 0x354bfd15
// declared property getter: - (Class)editPaneClass;	// 0x354bfd55
// declared property getter: - (id)identifier;	// 0x354bfbed
- (void)loadValuesAndTitlesFromDataSource;	// 0x354bf3bd
// declared property getter: - (id)name;	// 0x354bfde5
// converted property getter: - (id)properties;	// 0x354bf3ad
- (id)propertyForKey:(id)key;	// 0x354bf309
- (void)removePropertyForKey:(id)key;	// 0x354bf351
// declared property setter: - (void)setButtonAction:(SEL)action;	// 0x354bfe55
// declared property setter: - (void)setCellType:(int)type;	// 0x354bfd45
// declared property setter: - (void)setConfirmationAction:(SEL)action;	// 0x354bfe15
// declared property setter: - (void)setConfirmationCancelAction:(SEL)action;	// 0x354bfe35
// declared property setter: - (void)setControllerLoadAction:(SEL)action;	// 0x354bfe75
// declared property setter: - (void)setDetailControllerClass:(Class)aClass;	// 0x354bfd25
// declared property setter: - (void)setEditPaneClass:(Class)aClass;	// 0x354bfd65
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x354bfbd1
- (void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;	// 0x354bfc71
// declared property setter: - (void)setName:(id)name;	// 0x354bfdf5
// converted property setter: - (void)setProperties:(id)properties;	// 0x354bf371
- (void)setProperty:(id)property forKey:(id)key;	// 0x354bf329
// declared property setter: - (void)setShortTitleDictionary:(id)dictionary;	// 0x354bfdb5
// declared property setter: - (void)setShowContentString:(BOOL)string;	// 0x354bfe95
// declared property setter: - (void)setTarget:(id)target;	// 0x354bfd05
// declared property setter: - (void)setTitleDictionary:(id)dictionary;	// 0x354bfda5
// declared property setter: - (void)setUserInfo:(id)info;	// 0x354bfd85
// declared property setter: - (void)setValues:(id)values;	// 0x354bfdd5
- (void)setValues:(id)values titles:(id)titles;	// 0x354bf481
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;	// 0x354bf4a5
- (void)setupIconImageWithBundle:(id)bundle;	// 0x354bf5f5
- (void)setupIconImageWithPath:(id)path;	// 0x354bf6f5
// declared property getter: - (id)shortTitleDictionary;	// 0x354bfbad
// declared property getter: - (BOOL)showContentString;	// 0x354bfe85
// declared property getter: - (id)target;	// 0x354bfcf5
- (int)titleCompare:(id)compare;	// 0x354bfcb9
// declared property getter: - (id)titleDictionary;	// 0x354bfd95
// declared property getter: - (id)userInfo;	// 0x354bfd75
// declared property getter: - (id)values;	// 0x354bfdc5
@end

