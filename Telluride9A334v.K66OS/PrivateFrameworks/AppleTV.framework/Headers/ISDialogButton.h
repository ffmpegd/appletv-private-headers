/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ISDialogButton : NSObject {
@private
	int _actionType;	// 4 = 0x4
	id _parameter;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	int _urlType;	// 16 = 0x10
}
@property(assign) int actionType;	// G=0x3334f3bd; S=0x3334f3cd; @synthesize=_actionType
@property(retain) id parameter;	// G=0x3334f3dd; S=0x3334f3f1; @synthesize=_parameter
@property(retain) NSString *title;	// G=0x3334f415; S=0x3334f429; @synthesize=_title
@property(assign) int urlType;	// G=0x3334f44d; S=0x3334f45d; @synthesize=_urlType
+ (id)buttonWithTitle:(id)title;	// 0x3334eba5
- (id)_accountURLForURL:(id)url authenticationContext:(id)context;	// 0x3334f0a9
- (int)_actionTypeForString:(id)string;	// 0x3334f209
- (void)_openURLWithRequest:(id)request;	// 0x3334f2e9
- (int)_urlTypeForString:(id)string;	// 0x3334f365
// declared property getter: - (int)actionType;	// 0x3334f3bd
- (void)dealloc;	// 0x3334eb4d
- (BOOL)isEqual:(id)equal superficial:(BOOL)superficial;	// 0x3334ec09
- (void)loadFromDictionary:(id)dictionary;	// 0x3334ed31
// declared property getter: - (id)parameter;	// 0x3334f3dd
- (void)performDefaultActionForDialog:(id)dialog;	// 0x3334ef75
// declared property setter: - (void)setActionType:(int)type;	// 0x3334f3cd
- (void)setActionTypeWithString:(id)string;	// 0x3334f079
// declared property setter: - (void)setParameter:(id)parameter;	// 0x3334f3f1
// declared property setter: - (void)setTitle:(id)title;	// 0x3334f429
// declared property setter: - (void)setUrlType:(int)type;	// 0x3334f45d
// declared property getter: - (id)title;	// 0x3334f415
// declared property getter: - (int)urlType;	// 0x3334f44d
@end

