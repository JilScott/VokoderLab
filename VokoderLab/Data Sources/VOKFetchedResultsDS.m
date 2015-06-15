//
//  VOKFetchedResultsDS.m
//  VokoderLab
//
//  Created by Jilian Scott on 6/4/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import "VOKFetchedResultsDS.h"

#import "Task.h"

@implementation VOKFetchedResultsDS

- (UITableViewCell *)cellAtIndexPath:(NSIndexPath *)indexPath
{
    Task *task = [self.fetchedResultsController objectAtIndexPath:indexPath];
//    taskCell.accessoryType = UITableViewCellAccessoryCheckmark;
    UITableViewCell *cell = [self.tableView dequeueReusableCellWithIdentifier:@"Cell"];
    cell.textLabel.text = task.title;
    
    return cell;
}

@end
