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
@property(assign) int actionType;	// G=0x3681a579; S=0x3681a589; @synthesize=_actionType
@property(retain) id parameter;	// G=0x3681a599; S=0x3681a5ad; @synthesize=_parameter
@property(retain) NSString *title;	// G=0x3681a5d1; S=0x3681a5e5; @synthesize=_title
@property(assign) int urlType;	// G=0x3681a609; S=0x3681a619; @synthesize=_urlType
+ (id)buttonWithTitle:(id)title;	// 0x36819d61
- (id)_accountURLForURL:(id)url authenticationContext:(id)context;	// 0x3681a265
- (int)_actionTypeForString:(id)string;	// 0x3681a3c5
- (void)_openURLWithRequest:(id)request;	// 0x3681a4a5
- (int)_urlTypeForString:(id)string;	// 0x3681a521
// declared property getter: - (int)actionType;	// 0x3681a579
- (void)dealloc;	// 0x36819d09
- (BOOL)isEqual:(id)equal superficial:(BOOL)superficial;	// 0x36819dc5
- (void)loadFromDictionary:(id)dictionary;	// 0x36819eed
// declared property getter: - (id)parameter;	// 0x3681a599
- (void)performDefaultActionForDialog:(id)dialog;	// 0x3681a131
// declared property setter: - (void)setActionType:(int)type;	// 0x3681a589
- (void)setActionTypeWithString:(id)string;	// 0x3681a235
// declared property setter: - (void)setParameter:(id)parameter;	// 0x3681a5ad
// declared property setter: - (void)setTitle:(id)title;	// 0x3681a5e5
// declared property setter: - (void)setUrlType:(int)type;	// 0x3681a619
// declared property getter: - (id)title;	// 0x3681a5d1
// declared property getter: - (int)urlType;	// 0x3681a609
@end

