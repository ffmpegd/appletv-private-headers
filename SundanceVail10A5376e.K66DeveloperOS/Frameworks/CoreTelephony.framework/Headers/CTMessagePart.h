/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSMutableDictionary;

@interface CTMessagePart : NSObject {
	NSString *_contentType;	// 4 = 0x4
	NSMutableDictionary *_contentTypeParams;	// 8 = 0x8
	NSString *_contentId;	// 12 = 0xc
	NSString *_contentLocation;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *contentId;	// G=0x3674182d; S=0x36741841; @synthesize=_contentId
@property(copy, nonatomic) NSString *contentLocation;	// G=0x36741851; S=0x36741865; @synthesize=_contentLocation
@property(copy, nonatomic) NSString *contentType;	// G=0x36741809; S=0x3674181d; @synthesize=_contentType
@property(copy, nonatomic) NSData *data;	// G=0x36741875; S=0x36741889; @synthesize=_data
- (id)initWithData:(id)data contentType:(id)type;	// 0x3674163d
- (void)addContentTypeParameterWithName:(id)name value:(id)value;	// 0x36741725
- (id)allContentTypeParameterNames;	// 0x36741749
// declared property getter: - (id)contentId;	// 0x3674182d
// declared property getter: - (id)contentLocation;	// 0x36741851
// declared property getter: - (id)contentType;	// 0x36741809
- (id)contentTypeParameterWithName:(id)name;	// 0x36741705
// declared property getter: - (id)data;	// 0x36741875
- (void)dealloc;	// 0x36741769
// declared property setter: - (void)setContentId:(id)anId;	// 0x36741841
// declared property setter: - (void)setContentLocation:(id)location;	// 0x36741865
// declared property setter: - (void)setContentType:(id)type;	// 0x3674181d
// declared property setter: - (void)setData:(id)data;	// 0x36741889
@end

