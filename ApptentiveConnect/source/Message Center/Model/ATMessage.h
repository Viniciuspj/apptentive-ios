//
//  ATMessage.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 10/6/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ATMessage : NSManagedObject

@property (nonatomic, retain) NSString * apptentiveID;
@property (nonatomic, retain) NSNumber * creationTime;
@property (nonatomic, retain) NSNumber * pending;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) NSString * recipientID;
@property (nonatomic, retain) NSNumber * seenByUser;
@property (nonatomic, retain) NSString * senderID;
@property (nonatomic, retain) NSSet *displayTypes;

+ (ATMessage *)newMessageFromJSON:(NSDictionary *)json;
@end

@interface ATMessage (CoreDataGeneratedAccessors)

- (void)addDisplayTypesObject:(NSManagedObject *)value;
- (void)removeDisplayTypesObject:(NSManagedObject *)value;
- (void)addDisplayTypes:(NSSet *)values;
- (void)removeDisplayTypes:(NSSet *)values;

@end