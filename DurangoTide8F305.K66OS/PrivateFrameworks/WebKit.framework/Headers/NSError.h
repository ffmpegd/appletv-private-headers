/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSError.h> // Unknown library


@interface NSError (WebKitExtras)
+ (void)_registerWebKitErrors;	// 0x3401afd5
+ (id)_webKitErrorWithCode:(int)code failingURL:(id)url;	// 0x3401af21
+ (id)_webKitErrorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x3401aee9
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x3401af7d
+ (id)_webkit_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x3401aea9
- (id)_initWithPluginErrorCode:(int)pluginErrorCode contentURL:(id)url pluginPageURL:(id)url3 pluginName:(id)name MIMEType:(id)type;	// 0x3401acad
- (id)_webkit_initWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x3401abc1
@end

