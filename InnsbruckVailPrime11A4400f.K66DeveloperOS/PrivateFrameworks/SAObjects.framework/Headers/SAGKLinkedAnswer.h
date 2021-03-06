/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSURL, SAUIAppPunchOut, NSString;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *description;	// G=0x32701d9d; S=0x32701db9; 
@property(copy, nonatomic) NSString *displayLink;	// G=0x32701e09; S=0x32701e25; 
@property(copy, nonatomic) NSURL *link;	// G=0x32701e75; S=0x32701ef1; 
@property(copy, nonatomic) NSString *name;	// G=0x32701f51; S=0x32701f6d; 
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;	// G=0x32701fbd; S=0x32702001; 
@property(copy, nonatomic) NSString *query;	// G=0x3270203d; S=0x32702059; 
@property(copy, nonatomic) NSURL *searchUri;	// G=0x327020a9; S=0x32702125; 
+ (id)linkedAnswer;	// 0x32701d0d
+ (id)linkedAnswerWithDictionary:(id)dictionary context:(id)context;	// 0x32701d51
// declared property getter: - (id)description;	// 0x32701d9d
// declared property getter: - (id)displayLink;	// 0x32701e09
- (id)encodedClassName;	// 0x32701d01
- (id)groupIdentifier;	// 0x32701cf1
// declared property getter: - (id)link;	// 0x32701e75
// declared property getter: - (id)name;	// 0x32701f51
// declared property getter: - (id)punchOut;	// 0x32701fbd
// declared property getter: - (id)query;	// 0x3270203d
// declared property getter: - (id)searchUri;	// 0x327020a9
// declared property setter: - (void)setDescription:(id)description;	// 0x32701db9
// declared property setter: - (void)setDisplayLink:(id)link;	// 0x32701e25
// declared property setter: - (void)setLink:(id)link;	// 0x32701ef1
// declared property setter: - (void)setName:(id)name;	// 0x32701f6d
// declared property setter: - (void)setPunchOut:(id)anOut;	// 0x32702001
// declared property setter: - (void)setQuery:(id)query;	// 0x32702059
// declared property setter: - (void)setSearchUri:(id)uri;	// 0x32702125
@end

