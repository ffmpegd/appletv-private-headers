/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDocumentRepresentation.h"
#import "WebDocumentDOM.h"
#import <NSObject.h> // Unknown library

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
	WebHTMLRepresentationPrivate *_private;	// 4 = 0x4
}
+ (id)supportedImageMIMETypes;	// 0x3359fd79
+ (id)supportedMIMETypes;	// 0x3359fc09
+ (id)supportedNonImageMIMETypes;	// 0x3355b9e9
+ (id)unsupportedTextMIMETypes;	// 0x3355bf9d
- (id)init;	// 0x3355c63d
- (id)DOMDocument;	// 0x335a0385
- (BOOL)_isDisplayingWebArchive;	// 0x3359ffad
- (void)_redirectDataToManualLoader:(id)manualLoader forPluginView:(id)pluginView;	// 0x3359ff71
- (BOOL)canProvideDocumentSource;	// 0x335a003d
- (BOOL)canSaveAsWebArchive;	// 0x335a0081
- (id)controlsInForm:(id)form;	// 0x335a06b5
- (id)currentForm;	// 0x335a0671
- (void)dealloc;	// 0x33568171
- (id)documentSource;	// 0x335a00c5
- (BOOL)elementDoesAutoComplete:(id)complete;	// 0x335a0589
- (BOOL)elementIsPassword:(id)password;	// 0x335a05ed
- (id)elementWithName:(id)name inForm:(id)form;	// 0x335a03c9
- (void)finalize;	// 0x3359ff11
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x3355fd3d
- (id)formForElement:(id)element;	// 0x335a0631
- (id)matchLabels:(id)labels againstElement:(id)element;	// 0x335a0eed
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x3355eb29
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x3359fff9
- (id)searchForLabels:(id)labels beforeElement:(id)element;	// 0x335a076d
- (id)searchForLabels:(id)labels beforeElement:(id)element resultDistance:(unsigned *)distance resultIsInCellAbove:(BOOL *)cellAbove;	// 0x335a0795
- (void)setDataSource:(id)source;	// 0x3355c6e5
- (id)title;	// 0x335682c9
@end

