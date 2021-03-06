/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData, NSMutableDictionary;

@interface CTMessagePart : NSObject {
	NSString *_contentType;	// 4 = 0x4
	NSMutableDictionary *_contentTypeParams;	// 8 = 0x8
	NSString *_contentId;	// 12 = 0xc
	NSString *_contentLocation;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *contentId;	// G=0x347d6da9; S=0x347d6db9; @synthesize=_contentId
@property(copy, nonatomic) NSString *contentLocation;	// G=0x347d6ddd; S=0x347d6ded; @synthesize=_contentLocation
@property(copy, nonatomic) NSString *contentType;	// G=0x347d6d75; S=0x347d6d85; @synthesize=_contentType
@property(copy, nonatomic) NSData *data;	// G=0x347d6e11; S=0x347d6e21; @synthesize=_data
- (id)initWithData:(id)data contentType:(id)type;	// 0x347d6bad
- (void)addContentTypeParameterWithName:(id)name value:(id)value;	// 0x347d6c95
- (id)allContentTypeParameterNames;	// 0x347d6cb9
// declared property getter: - (id)contentId;	// 0x347d6da9
// declared property getter: - (id)contentLocation;	// 0x347d6ddd
// declared property getter: - (id)contentType;	// 0x347d6d75
- (id)contentTypeParameterWithName:(id)name;	// 0x347d6c75
// declared property getter: - (id)data;	// 0x347d6e11
- (void)dealloc;	// 0x347d6cd9
// declared property setter: - (void)setContentId:(id)anId;	// 0x347d6db9
// declared property setter: - (void)setContentLocation:(id)location;	// 0x347d6ded
// declared property setter: - (void)setContentType:(id)type;	// 0x347d6d85
// declared property setter: - (void)setData:(id)data;	// 0x347d6e21
@end

