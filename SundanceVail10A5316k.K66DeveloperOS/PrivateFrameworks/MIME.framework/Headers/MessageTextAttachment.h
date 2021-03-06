/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
@private
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x366d79c9; S=0x366d79e5; 
@property(retain) id mimePart;	// G=0x366d8075; S=0x366d8091; converted property
+ (unsigned)precedenceLevel;	// 0x366d7cb9
- (id)init;	// 0x366d7709
- (id)initWithWrapper:(id)wrapper;	// 0x366d776d
- (unsigned)approximateSize;	// 0x366d7a01
- (id)cachedValueForKey:(id)key;	// 0x366d78a5
- (void)dealloc;	// 0x366d77f1
- (id)description;	// 0x366d783d
- (void)download;	// 0x366d7be9
// declared property getter: - (id)fileWrapper;	// 0x366d79c9
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x366d7c69
- (BOOL)hasBeenDownloaded;	// 0x366d7bc1
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x366d7c15
- (BOOL)isPlaceholder;	// 0x366d7bed
// converted property getter: - (id)mimePart;	// 0x366d8075
- (BOOL)needsRedownload;	// 0x366d7be5
- (id)persistentUniqueIdentifier;	// 0x366d7cb5
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x366d7919
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x366d79e5
// converted property setter: - (void)setMimePart:(id)part;	// 0x366d8091
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x366d80ad
- (id)textEncodingGuess;	// 0x366d80b1
- (id)textEncodingNameForData:(id)data mimeType:(id)type;	// 0x366d80b5
@end

