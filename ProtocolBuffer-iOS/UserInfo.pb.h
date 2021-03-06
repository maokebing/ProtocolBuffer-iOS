// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class UserInfo;
@class UserInfoBuilder;


typedef NS_ENUM(SInt32, UserStatus) {
  UserStatusOffline = 0,
  UserStatusOnline = 1,
};

BOOL UserStatusIsValidValue(UserStatus value);
NSString *NSStringFromUserStatus(UserStatus value);


@interface UserInfoRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define UserInfo_acctID @"acctId"
#define UserInfo_name @"name"
#define UserInfo_status @"status"
@interface UserInfo : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAcctId_:1;
  BOOL hasName_:1;
  BOOL hasStatus_:1;
  SInt64 acctId;
  NSString* name;
  UserStatus status;
}
- (BOOL) hasAcctId;
- (BOOL) hasName;
- (BOOL) hasStatus;
@property (readonly) SInt64 acctId;
@property (readonly, strong) NSString* name;
@property (readonly) UserStatus status;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (UserInfoBuilder*) builder;
+ (UserInfoBuilder*) builder;
+ (UserInfoBuilder*) builderWithPrototype:(UserInfo*) prototype;
- (UserInfoBuilder*) toBuilder;

+ (UserInfo*) parseFromData:(NSData*) data;
+ (UserInfo*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (UserInfo*) parseFromInputStream:(NSInputStream*) input;
+ (UserInfo*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (UserInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (UserInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface UserInfoBuilder : PBGeneratedMessageBuilder {
@private
  UserInfo* resultUserInfo;
}

- (UserInfo*) defaultInstance;

- (UserInfoBuilder*) clear;
- (UserInfoBuilder*) clone;

- (UserInfo*) build;
- (UserInfo*) buildPartial;

- (UserInfoBuilder*) mergeFrom:(UserInfo*) other;
- (UserInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (UserInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasAcctId;
- (SInt64) acctId;
- (UserInfoBuilder*) setAcctId:(SInt64) value;
- (UserInfoBuilder*) clearAcctId;

- (BOOL) hasName;
- (NSString*) name;
- (UserInfoBuilder*) setName:(NSString*) value;
- (UserInfoBuilder*) clearName;

- (BOOL) hasStatus;
- (UserStatus) status;
- (UserInfoBuilder*) setStatus:(UserStatus) value;
- (UserInfoBuilder*) clearStatus;
@end


// @@protoc_insertion_point(global_scope)
