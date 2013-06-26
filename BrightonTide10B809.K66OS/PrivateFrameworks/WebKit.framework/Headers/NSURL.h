/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x365ec45d
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x365f4285
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x365f428d
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x3659eb0d
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x3659eec1
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x3659d125
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x365f427d
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x365f4be1
- (id)_web_URLByRemovingUserInfo;	// 0x365f4361
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x365f4349
- (const char *)_web_URLCString;	// 0x365f42d5
- (id)_web_URLWithLowercasedScheme;	// 0x365f4439
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x365f45dd
- (id)_web_hostData;	// 0x365f45ed
- (id)_web_hostString;	// 0x365f464d
- (BOOL)_web_isEmpty;	// 0x365f4299
- (id)_web_originalData;	// 0x365f4295
- (id)_web_originalDataAsString;	// 0x3659defd
- (id)_web_schemeData;	// 0x365f45e5
- (id)_web_schemeSeparatorWithoutColon;	// 0x365f454d
- (id)_web_userVisibleString;	// 0x3659e335
- (id)_webkit_URLByRemovingFragment;	// 0x365f4351
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x365f4359
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// 0x365f46dd
- (id)_webkit_canonicalize;	// 0x365a3345
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x365f43b5
- (BOOL)_webkit_isFileURL;	// 0x365f438d
- (BOOL)_webkit_isJavaScriptURL;	// 0x365f4365
- (id)_webkit_scriptIfJavaScriptURL;	// 0x365a4069
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x365f43dd
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x365f46d5
- (id)_webkit_youTubeURL;	// 0x365f474d
@end
