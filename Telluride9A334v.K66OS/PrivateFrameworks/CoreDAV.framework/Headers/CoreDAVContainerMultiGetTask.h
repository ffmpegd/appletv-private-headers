/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask {
	NSSet *_urls;	// 120 = 0x78
	NSString *_appSpecificNamespace;	// 124 = 0x7c
	NSString *_appSpecificMultiGetNameSpace;	// 128 = 0x80
	NSString *_appSpecificMultiGetCommand;	// 132 = 0x84
	NSString *_appSpecificDataProp;	// 136 = 0x88
	Class _appSpecificDataItemClass;	// 140 = 0x8c
	BOOL _shouldIgnoreResponseErrors;	// 144 = 0x90
	NSSet *_additionalPropElements;	// 148 = 0x94
	NSSet *_parsedContents;	// 152 = 0x98
	NSSet *_missingURLs;	// 156 = 0x9c
}
@property(retain) NSSet *additionalPropElements;	// G=0x34798731; S=0x34798745; @synthesize=_additionalPropElements
@property(readonly, assign, nonatomic) NSSet *missingURLs;	// G=0x34798799; @synthesize=_missingURLs
@property(readonly, assign) NSSet *parsedContents;	// G=0x34798789; @synthesize=_parsedContents
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x34798769; S=0x34798779; @synthesize=_shouldIgnoreResponseErrors
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;	// 0x34797b09
// declared property getter: - (id)additionalPropElements;	// 0x34798731
- (id)copyAdditionalPropElements;	// 0x34797c5d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x34798081
- (void)dealloc;	// 0x34797c65
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34798279
- (id)httpMethod;	// 0x34797ced
// declared property getter: - (id)missingURLs;	// 0x34798799
// declared property getter: - (id)parsedContents;	// 0x34798789
- (id)requestBody;	// 0x34797cf9
// declared property setter: - (void)setAdditionalPropElements:(id)elements;	// 0x34798745
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x34797c61
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x34798779
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x34798769
@end

