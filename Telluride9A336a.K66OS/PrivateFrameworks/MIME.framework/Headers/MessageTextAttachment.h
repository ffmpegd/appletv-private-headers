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
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x35097e9d; S=0x35097eb9; 
@property(retain) id mimePart;	// G=0x350982d1; S=0x350982ed; converted property
- (id)init;	// 0x35097d01
- (id)initWithWrapper:(id)wrapper;	// 0x35098309
- (unsigned)approximateSize;	// 0x35097ed5
- (id)cachedValueForKey:(id)key;	// 0x35097d65
- (void)dealloc;	// 0x35098405
- (id)description;	// 0x35098399
- (void)download;	// 0x35097cf5
// declared property getter: - (id)fileWrapper;	// 0x35097e9d
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x35098115
- (BOOL)hasBeenDownloaded;	// 0x35098071
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x350980bd
- (BOOL)isPlaceholder;	// 0x35098095
// converted property getter: - (id)mimePart;	// 0x350982d1
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x35097ddd
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x35097eb9
// converted property setter: - (void)setMimePart:(id)part;	// 0x350982ed
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x35097cf9
- (id)textEncodingGuess;	// 0x35097cfd
@end

