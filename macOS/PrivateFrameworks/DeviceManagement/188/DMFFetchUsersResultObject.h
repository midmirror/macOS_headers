//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface DMFFetchUsersResultObject : CATTaskResultObject
{
    NSArray *_users;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsers:(id)arg1;

@end

