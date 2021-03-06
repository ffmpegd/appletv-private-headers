/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebDataSourcePrivate;

@interface WebDataSource : NSObject {
@private
	WebDataSourcePrivate *_private;	// 4 = 0x4
}
+ (id)_repTypesAllowImageTypeOmission:(BOOL)omission;	// 0x33fd2021
+ (Class)_representationClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x33fd2645
- (id)initWithRequest:(id)request;	// 0x33ff3545
- (id)_URL;	// 0x33ff3e29
- (void)_addSubframeArchives:(id)archives;	// 0x33ff380d
- (id)_documentFragmentWithArchive:(id)archive;	// 0x33ff3b75
- (id)_documentFragmentWithImageResource:(id)imageResource;	// 0x33ff27bd
- (DocumentLoader *)_documentLoader;	// 0x33fc5999
- (void)_finishedLoading;	// 0x33fc5a15
- (id)_imageElementWithImageResource:(id)imageResource;	// 0x33ff281d
- (id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>)documentLoader;	// 0x33fc4791
- (BOOL)_isDocumentHTML;	// 0x33fc5c6d
- (id)_mainDocumentError;	// 0x33ff37e5
- (void)_makeRepresentation;	// 0x33fd2539
- (void)_receivedData:(id)data;	// 0x33fd47c5
- (void)_replaceSelectionWithArchive:(id)archive selectReplacement:(BOOL)replacement;	// 0x33ff2775
- (id)_responseMIMEType;	// 0x33fc526d
- (void)_revertToProvisionalState;	// 0x33ff275d
- (void)_setMainDocumentError:(id)error;	// 0x33fe0e7d
- (void)_setOverrideTextEncodingName:(id)name;	// 0x33ff39dd
- (void)_setRepresentation:(id)representation;	// 0x33fd26ed
- (BOOL)_transferApplicationCache:(id)cache;	// 0x33ff387d
- (id)_webView;	// 0x33fca945
- (void)addSubresource:(id)subresource;	// 0x33ff293d
- (id)data;	// 0x33ff3389
- (void)dealloc;	// 0x33fd4491
- (void)finalize;	// 0x33ff34e9
- (id)initialRequest;	// 0x33fd4ff9
- (BOOL)isLoading;	// 0x33ff330d
- (id)mainResource;	// 0x33ff2f89
- (id)pageTitle;	// 0x33fc59b5
- (id)representation;	// 0x33fc59d9
- (id)request;	// 0x33fcf08d
- (id)response;	// 0x33fc5291
- (id)subresourceForURL:(id)url;	// 0x33ff2a89
- (id)subresources;	// 0x33ff2d39
- (id)textEncodingName;	// 0x33ff3331
- (id)unreachableURL;	// 0x33fcf16d
- (id)webArchive;	// 0x33ff3161
- (id)webFrame;	// 0x33fc4879
@end

