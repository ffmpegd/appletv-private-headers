/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x3053a8dd
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x3053f83d
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x304f1a71
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x304f19d9
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x304f19f9
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x3053f825
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x3053fb39
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x3053fe49
- (id)_web_URLByRemovingComponentAndSubsequentCharacter:(long)character;	// 0x3053fd39
- (id)_web_URLByRemovingUserInfo;	// 0x3053f7a1
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x30502819
- (const char *)_web_URLCString;	// 0x3053f719
- (id)_web_URLWithLowercasedScheme;	// 0x304efa59
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x3050304d
- (BOOL)_web_hasQuestionMarkOnlyQueryString;	// 0x3053fc71
- (id)_web_hostData;	// 0x30502fe1
- (id)_web_hostString;	// 0x30502f61
- (BOOL)_web_isEmpty;	// 0x304f726d
- (id)_web_originalData;	// 0x304ef405
- (id)_web_originalDataAsString;	// 0x304f1215
- (id)_web_schemeData;	// 0x305032a9
- (id)_web_schemeSeparatorWithoutColon;	// 0x3053fca9
- (id)_web_userVisibleString;	// 0x304ee6d1
- (id)_webkit_URLByRemovingFragment;	// 0x30502801
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x3053f789
- (id)_webkit_canonicalize;	// 0x304f76d5
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x3053f801
- (BOOL)_webkit_isFileURL;	// 0x3053f7dd
- (BOOL)_webkit_isJavaScriptURL;	// 0x3053f7b9
- (id)_webkit_scriptIfJavaScriptURL;	// 0x304ee619
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x304f7219
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x3053fe3d
- (id)_webkit_youTubeURL;	// 0x304ff955
@end

